// WAVE file header format
struct HEADER {
    unsigned char riff[4];                      // RIFF string
    unsigned int overall_size   ;               // overall size of file in bytes
    unsigned char wave[4];                      // WAVE string
    unsigned char fmt_chunk_marker[4];          // fmt string with trailing null char
    unsigned int length_of_fmt;                 // length of the format data
    unsigned int format_type;                   // format type. 1-PCM, 3- IEEE float, 6 - 8bit A law, 7 - 8bit mu law
    unsigned int channels;                      // no.of channels
    unsigned int sample_rate;                   // sampling rate (blocks per second)
    unsigned int byterate;                      // SampleRate * NumChannels * BitsPerSample/8
    unsigned int block_align;                   // NumChannels * BitsPerSample/8
    unsigned int bits_per_sample;               // bits per sample, 8- 8bits, 16- 16 bits etc
    unsigned char data_chunk_header [4];        // DATA string or FLLR string
    unsigned int data_size;                     // NumSamples * NumChannels * BitsPerSample/8 - size of the next chunk that will be read
};

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define TRUE 1
#define FALSE 0
 
void *read_wave(char *filename, int *in_bits, int *in_channels, float *in_sample_rate, int *in_num_samples, float *in_seconds)
{
struct HEADER header;
unsigned char buffer4[4];
unsigned char buffer2[2];

	void *result_buffer = NULL;
	FILE *fp = fopen(filename, "rb");
	if(fp != NULL) 
	{
		int read = 0;
		read = fread(header.riff, sizeof(header.riff), 1, fp);

		read = fread(buffer4, sizeof(buffer4), 1, fp);
		header.overall_size  = buffer4[0] | (buffer4[1]<<8) | (buffer4[2]<<16) | (buffer4[3]<<24);

		read = fread(header.wave, sizeof(header.wave), 1, fp);

		read = fread(header.fmt_chunk_marker, sizeof(header.fmt_chunk_marker), 1, fp);

		read = fread(buffer4, sizeof(buffer4), 1, fp);
		header.length_of_fmt = buffer4[0] | (buffer4[1] << 8) | (buffer4[2] << 16) | (buffer4[3] << 24);

		read = fread(buffer2, sizeof(buffer2), 1, fp);
		header.format_type = buffer2[0] | (buffer2[1] << 8);
		char format_name[10] = "";
		if(header.format_type == 1) strcpy(format_name,"PCM");
		else if(header.format_type == 6) strcpy(format_name, "A-law");
		else if(header.format_type == 7) strcpy(format_name, "Mu-law");

 		read = fread(buffer2, sizeof(buffer2), 1, fp);
 		header.channels = buffer2[0] | (buffer2[1] << 8);
		*in_channels = header.channels;

 		read = fread(buffer4, sizeof(buffer4), 1, fp);
 		header.sample_rate = buffer4[0] | (buffer4[1] << 8) | (buffer4[2] << 16) | (buffer4[3] << 24);
		*in_sample_rate = (float)header.sample_rate;

 		read = fread(buffer4, sizeof(buffer4), 1, fp);
 		header.byterate  = buffer4[0] | (buffer4[1] << 8) | (buffer4[2] << 16) | (buffer4[3] << 24);

 		read = fread(buffer2, sizeof(buffer2), 1, fp);
 		header.block_align = buffer2[0] | (buffer2[1] << 8);

 		read = fread(buffer2, sizeof(buffer2), 1, fp);
 		header.bits_per_sample = buffer2[0] | (buffer2[1] << 8);
		*in_bits = header.bits_per_sample;

 		read = fread(header.data_chunk_header, sizeof(header.data_chunk_header), 1, fp);

 		read = fread(buffer4, sizeof(buffer4), 1, fp);
 		header.data_size = buffer4[0] | (buffer4[1] << 8) | (buffer4[2] << 16) | (buffer4[3] << 24 );

 		long num_samples = (8 * header.data_size) / (header.channels * header.bits_per_sample);
		*in_num_samples = num_samples;

 		long size_of_each_sample = (header.channels * header.bits_per_sample) / 8;

 		float duration_in_seconds = (float)header.overall_size / header.byterate;
		*in_seconds = duration_in_seconds;

		if(header.format_type == 1) 
		{
			long i = 0;
			char *data_buffer = (char *)malloc(size_of_each_sample);
			int size_is_correct = TRUE;
			 
			long bytes_in_each_channel = (size_of_each_sample / header.channels);
			if((bytes_in_each_channel * header.channels) != size_of_each_sample) 
			{
				size_is_correct = FALSE;
			}
			if(size_is_correct) 
			{
				long low_limit = 0l;
				long high_limit = 0l;
				switch(header.bits_per_sample) 
				{
					case 8:
						low_limit = -128;
						high_limit = 127;
					break;
					case 16:
						low_limit = -32768;
						high_limit = 32767;
					break;
					case 32:
						low_limit = -2147483648;
						high_limit = 2147483647;
					break;
				}
				result_buffer = malloc((num_samples * bytes_in_each_channel * header.channels));
				*in_seconds = (float)num_samples / (float)header.sample_rate;
				if(result_buffer != NULL)
				{
					char *ptr = (char *)result_buffer;
					for(i = 1;i <= num_samples;i++) 
					{
						read = fread(data_buffer, size_of_each_sample, 1, fp);
						if(read == 1) 
						{
							unsigned int  xchannels = 0;
							int data_in_channel = 0;
							for(xchannels = 0; xchannels < header.channels; xchannels++) 
							{
								if(bytes_in_each_channel == 4) 
								{
									data_in_channel = data_buffer[0] | (data_buffer[1]<<8) | (data_buffer[2]<<16) | (data_buffer[3]<<24);
									*ptr++ = (char)data_buffer[0];
									*ptr++ = (char)data_buffer[1];
									*ptr++ = (char)data_buffer[2];
									*ptr++ = (char)data_buffer[3];
								}
								else if(bytes_in_each_channel == 2) 
								{
									data_in_channel = data_buffer[0] | (data_buffer[1] << 8);
									*ptr++ = (char)data_buffer[0];
									*ptr++ = (char)data_buffer[1];
								}
								else if(bytes_in_each_channel == 1)
								{
									data_in_channel = data_buffer[0];
									*ptr++ = (char)data_buffer[0];
								}
							}
						}
						else 
						{
							break;
						}
					} 
				}
			} 
			free(data_buffer); 
		}
		fclose(fp);
	}
	return(result_buffer);
}
