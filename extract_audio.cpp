#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
 
extern "C" {
#include <libavutil/opt.h>
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswresample/swresample.h>
}
 
long int decode_audio_file(void *update_win, int *progress, const char* path, const int sample_rate, int out_channels, short int **data, int *size) 
{
void	update_extracting_message(void *update_win, int type);
 
	// initialize all muxers, demuxers and protocols for libavformat
	// (does nothing if called twice during the course of one program execution)
	av_register_all();
 
	// get format from audio file
	AVFormatContext* format = avformat_alloc_context();
	if(avformat_open_input(&format, path, NULL, NULL) != 0) 
	{
		fprintf(stderr, "Could not open file '%s'\n", path);
		return(-1);
	}
	if(avformat_find_stream_info(format, NULL) < 0) 
	{
		fprintf(stderr, "Could not retrieve stream info from file '%s'\n", path);
		return(-1);
	}
	// Find the index of the first audio stream
	int stream_index =- 1;
	for(int i=0; i<format->nb_streams; i++) 
	{
		if(format->streams[i]->codec->codec_type == AVMEDIA_TYPE_AUDIO) 
		{
			stream_index = i;
			break;
		}
	}
	if(stream_index == -1) 
	{
		fprintf(stderr, "Could not retrieve audio stream from file '%s'\n", path);
		return(-1);
	}
	AVStream* stream = format->streams[stream_index];
 
	// find & open codec
	AVCodecContext* codec = stream->codec;
	if(avcodec_open2(codec, avcodec_find_decoder(codec->codec_id), NULL) < 0) 
	{
		fprintf(stderr, "Failed to open decoder for stream #%u in file '%s'\n", stream_index, path);
		return(-1);
	}
 
	// prepare resampler
	int out_layout = AV_CH_LAYOUT_MONO;
	if(out_channels == 2)
	{
		out_layout = AV_CH_LAYOUT_STEREO;
	}
	struct SwrContext* swr = swr_alloc();
	av_opt_set_int(swr, "in_channel_count",  codec->channels, 0);
	av_opt_set_int(swr, "out_channel_count", out_channels, 0);
	av_opt_set_int(swr, "in_channel_layout",  codec->channel_layout, 0);
	av_opt_set_int(swr, "out_channel_layout", out_layout, 0);
	av_opt_set_int(swr, "in_sample_rate", codec->sample_rate, 0);
	av_opt_set_int(swr, "out_sample_rate", sample_rate, 0);
	av_opt_set_sample_fmt(swr, "in_sample_fmt",  codec->sample_fmt, 0);
	av_opt_set_sample_fmt(swr, "out_sample_fmt", AV_SAMPLE_FMT_S16,  0);
	swr_init(swr);
	if(!swr_is_initialized(swr)) 
	{
		fprintf(stderr, "Resampler has not been properly initialized\n");
		return(-1);
	}
 
	// prepare to read data
	AVPacket packet;
	av_init_packet(&packet);
	AVFrame* frame = av_frame_alloc();
	if(!frame) 
	{
		fprintf(stderr, "Error allocating the frame\n");
		return(-1);
	}
 
	// iterate through frames
	*data = NULL;
	long int nn = 0;
	while(av_read_frame(format, &packet) >= 0) 
	{
		// decode one frame
		int gotFrame;

		if(packet.stream_index != stream_index) 
		{
			av_packet_unref(&packet);
			continue;
		}
		// We have a valid packet => send it to the decoder.
		int res = 0;
		if((res = avcodec_send_packet(codec, &packet)) != 0) 
		{
			printf("Failed to send packet: %d.\n", res);
			break;
		}
		av_packet_unref(&packet);
		res = avcodec_receive_frame(codec, frame);

		// resample frames
		short int *buffer;
		av_samples_alloc((uint8_t **)&buffer, NULL, out_channels, frame->nb_samples, AV_SAMPLE_FMT_S16, 0);
		int frame_count = swr_convert(swr, (uint8_t **)&buffer, frame->nb_samples, (const uint8_t**)frame->data, frame->nb_samples);

		// append resampled frames to data
		*data = (short int *)realloc(*data, (nn + frame->nb_samples) * (sizeof(short int) * out_channels));
		memcpy(*data + nn, buffer, frame_count * sizeof(short int) * out_channels);
		nn += (frame_count * out_channels);
		update_extracting_message(update_win, -1);
	}
	*size = (int)nn;
 
	// clean up
	av_frame_free(&frame);
	swr_free(&swr);
	avcodec_close(codec);
	avformat_free_context(format);
 
	// success
	long int rr = (nn * sizeof(short int));
	return(rr);
}

int	extract_audio(void *update_win, int *progress, char *in_filename, char *out_filename, int sample_rate, int channels)
{
short int	*data;
int		size;

	// decode data
	long int nn = decode_audio_file(update_win, progress, in_filename, sample_rate, channels, &data, &size);
	if(nn < 0)
	{
		return -1;
	}
	int fd = open(out_filename, O_CREAT | O_TRUNC | O_WRONLY, 0666);
	if(fd > -1)
	{
		write(fd, &channels, sizeof(int));
		write(fd, &sample_rate, sizeof(int));
		write(fd, data, nn);
		close(fd);
	}
	free(data);
	return 0;
}
