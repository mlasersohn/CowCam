#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>

#define DR_MP3_IMPLEMENTATION
#include "dr_mp3.h"
#define DR_WAV_IMPLEMENTATION
#include "dr_wav.h"
#define DR_FLAC_IMPLEMENTATION
#include "dr_flac.h"

#include <pulse/error.h>
#include <pulse/simple.h>

#include "PulseAudio.h"

#include <FL/filename.H>

int		create_task(int (*funct)(int *), void *flag);
int		pulse_record_all(int *flag);
int		pulse_play_all(int *flag);
long int	precise_time(void);

extern "C" {
int cow_simple_read(pa_simple *p, void *data, size_t length, int *rerror);
}

int	pulse_record(int *flag)
{
void	read_pulse_mic(PulseAudio *pa, int any_recording);

	PulseAudio *pa = (PulseAudio *)flag;
	while(pa->stop == 0)
	{
		read_pulse_mic(pa, 1);
	}
	pa->stopped = 1;
	return(0);
}

int	PulseAudio::SampleAudioFile()
{
int	loop;

	int n = 0;
	drmp3 *mp3 = (drmp3 *)p_mp3;
	drwav *wav = (drwav *)p_wav;
	drflac *flac = (drflac *)p_flac;
	int channels = 1;
	if(p_mp3 != NULL)
	{
		channels = mp3->channels;
	}
	else if(p_wav != NULL)
	{
		channels = wav->channels;
	}
	else if(p_flac != NULL)
	{
		channels = flac->channels;
	}
	SAMPLE buf[number_of_samples * channels];
	if(p_mp3 != NULL)
	{
		drmp3_uint64 framesRead = drmp3_read_pcm_frames_s16((drmp3 *)p_mp3, number_of_samples, buf);
		n = (int)framesRead;
	}
	else if(p_wav != NULL)
	{
		drwav_uint64 framesRead = drwav_read_pcm_frames_s16((drwav *)p_wav, number_of_samples, buf);
		n = (int)framesRead;
	}
	else if(p_flac != NULL)
	{
		drflac_uint64 framesRead = drflac_read_pcm_frames_s16((drflac *)p_flac, number_of_samples, buf);
		n = (int)framesRead;
	}
	if(n > 0)
	{
		SAMPLE *cp = (SAMPLE *)buffer;
		for(loop = 0;loop < number_of_samples * channels;loop += channels)
		{
			int nn = (int)buf[loop];
			if(channels == 2)
			{
				nn = ((int)buf[loop] + (int)buf[loop + 1]) / 2;
			}
			*cp = (SAMPLE)nn;
			cp++;
		}
		usleep(18000);
	}
	else
	{
		if(repeating == 1)
		{
			if(p_mp3 != NULL)
			{
				drmp3_seek_to_pcm_frame((drmp3 *)p_mp3, 0);
			}
			else if(p_wav != NULL)
			{
				drwav_seek_to_pcm_frame((drwav *)p_wav, 0);
			}
			else if(p_flac != NULL)
			{
				drflac_seek_to_pcm_frame((drflac *)p_flac, 0);
			}
		}
	}
	return(n);
}

void	read_pulse_mic(PulseAudio *pa, int any_recording)
{
int	loop;

	pa->stopped = 0;
	int error = 0;
	if((pa->shutdown == 0) && (pa->failure == 0))
	{
		if((pa->pause == 0) && (pa->buffer != NULL))
		{
			if(pa->stop == 0)
			{
				if((pa->stream != NULL) || (pa->is_microphone == 0))
				{
					int n = 0;
					if(pa->is_microphone)
					{
						n = cow_simple_read(pa->stream, pa->buffer, pa->buffer_size, &error);
					}
					else
					{
						n = pa->SampleAudioFile();
					}
					if(n < 0)
					{
						pa->failure = 1;
					}
					if(pa->mute == 1)
					{
						memset(pa->buffer, 0, pa->buffer_size);
					}
					else
					{
						if(pa->buffer_size > 0)
						{
							int total = 0;
							int nn = pa->buffer_size / sizeof(SAMPLE);
							if(nn > 0)
							{
								for(loop = 0;loop < nn;loop++)
								{
									total += abs(pa->buffer[loop]);
								}
								double avg = (double)(total / nn);
								if(avg > 0.0)
								{
									pa->average = avg;
								}
							}
						}
					}
					if(pa->sample_ready_cb != NULL)
					{
						pa->sample_ready_cb(pa);
					}
				}
				else
				{
					pa->failure = 1;
				}
			}
			else
			{
				pa->stopped = 1;
			}
		}
		else if(any_recording == 0)
		{
			if(pa->buffer != NULL)
			{
				if((pa->stream != NULL) || (pa->is_microphone == 0))
				{
					int n = 0;
					if(pa->is_microphone)
					{
						n = cow_simple_read(pa->stream, pa->buffer, pa->buffer_size, &error);
					}
					if(n < 0)
					{
						pa->failure = 1;
					}
					if(pa->buffer_size > 0)
					{
						int total = 0;
						int nn = pa->buffer_size / sizeof(SAMPLE);
						if(nn > 0)
						{
							for(loop = 0;loop < nn;loop++)
							{
								total += abs(pa->buffer[loop]);
							}
							double avg = (double)(total / nn);
							if(avg > 0.0)
							{
								pa->average = avg;
							}
							pa->average = pa->buffer[0];
						}
					}
					memset(pa->buffer, 0, pa->buffer_size);
				}
				else
				{
					pa->failure = 1;
				}
			}
		}
		if(pa->stop == 1)
		{
			pa->stopped = 1;
		}
	}
	else
	{
		pa->stopped = 1;
	}
}

int	pulse_play(int *flag)
{
	PulseAudio *pa = (PulseAudio *)flag;
	while(pa->stop == 0)
	{
		pa->stopped = 0;
		if(pa->pause == 0)
		{
			if(pa->sample_ready_cb != NULL)
			{
				pa->sample_ready_cb(pa);
			}
			if(pa->buffer != NULL)
			{
				if(pa->mute == 1)
				{
					memset(pa->buffer, 0, pa->buffer_size);
				}
				int error = 0;
				int n = pa_simple_write(pa->stream, pa->buffer, pa->buffer_size, &error);
			}
		}
		else
		{
			if(pa->buffer != NULL)
			{
				memset(pa->buffer, 0, pa->buffer_size);
			}
			usleep(10000);
		}
	}
	pa->stopped = 1;
	return(0);
}

PulseAudio::PulseAudio(char *in_device, int in_mode, int in_number_of_samples, int in_hz, int in_number_of_channels, SAMPLE *default_buffer)
{
long int precise_time(void);

	p_mp3 = NULL;
	p_wav = NULL;
	p_flac = NULL;
	static const pa_sample_spec pulse_ss =
	{
		.format = PA_SAMPLE_S16LE,
		.rate = (uint32_t)in_hz,
		.channels = (uint8_t)in_number_of_channels
	};
    	static const pa_buffer_attr ba = 
	{
		.maxlength = 8192,
        	.tlength = 1,
        	.prebuf = 1,
        	.minreq = 1,
        	.fragsize = 2048
	};
	device = NULL;
	if(in_device != NULL)
	{
		device = strdup(in_device);
	}
	failure = 0;
	shutdown = 0;
	mute = 0;
	stop = 0;
	mode = in_mode;
	volume = 0.0;
	average = 0.0;
	number_of_channels = in_number_of_channels;
	number_of_samples = in_number_of_samples;
	buffer_size = number_of_samples * sizeof(SAMPLE) * number_of_channels;
	buffer = default_buffer;
	is_microphone = 0;
	repeating = 0;
	if(buffer != NULL)
	{
		memset(buffer, 0, buffer_size);
	}
	if(mode == MODE_RECORD)
	{
		int error = 0;
		stream = pa_simple_new(NULL, "webcam", PA_STREAM_RECORD, device, "record", &pulse_ss, NULL, &ba, &error);
		if(stream != NULL)
		{
			unsigned char local_buffer[32];
			int n = cow_simple_read(stream, local_buffer, 32, &error);
			if(n < 0)
			{
				failure = 1;
			}
			pause = 1;
			stop = 1;
			is_microphone = 1;
		}
		else if(device != NULL)
		{
			failure = 1;
			static drmp3 mp3;
			static drwav wav;
			const char *extension = fl_filename_ext((const char *)device);
			if(extension != NULL)
			{
				if(strcmp(extension, ".mp3") == 0)
				{
					if(drmp3_init_file(&mp3, device, NULL)) 
					{
						p_mp3 = &mp3;
						failure = 0;
					}
				}
				else if(strcmp(extension, ".wav") == 0)
				{
					if(drwav_init_file(&wav, device, NULL)) 
					{
						p_wav = &wav;
						failure = 0;
					}
				}
				else if(strcmp(extension, ".flac") == 0)
				{
					p_flac = drflac_open_file(device, NULL);
					if(p_flac != NULL)
					{
						failure = 0;
					}
				}
			}
			pause = 1;
			stop = 1;
		}
	}
	else
	{
		int error = 0;
		stream = pa_simple_new(NULL, "webcam", PA_STREAM_PLAYBACK, device, "play", &pulse_ss, NULL, NULL, &error);
		if(stream != NULL)
		{
			pause = 1;
			stop = 1;
		}
		else
		{
			failure = 1;
		}
	}
}

void	PulseAudio::Run()
{
	if(mode == MODE_RECORD)
	{
		pthread_t signal_thread = create_task((int (*)(int *))pulse_record_all, (void *)this);
	}
	else
	{
		pthread_t signal_thread = create_task((int (*)(int *))pulse_play_all, (void *)this);
	}
}

PulseAudio::~PulseAudio()
{
	stop = 1;
	usleep(1000);
	if(stream != NULL)
	{
		pa_simple_free(stream);
		stream = NULL;
	}
	if(buffer != NULL)
	{
		free(buffer);
		buffer = NULL;
	}
	if(device != NULL)
	{
		free(device);
	}
}

void	PulseAudio::Play()
{
	pause = 0;
	if(stop == 1)
	{
		stop = 0;
	}
}

void	PulseAudio::Record()
{
	pause = 0;
	if(stop == 1)
	{
		stop = 0;
	}
	int err = 0;
	if(is_microphone == 1)
	{
		pa_simple_flush(stream, &err);
	}
	else
	{
		if(p_mp3 != NULL)
		{
			drmp3_seek_to_pcm_frame((drmp3 *)p_mp3, 0);
		}
		else if(p_wav != NULL)
		{
			drwav_seek_to_pcm_frame((drwav *)p_wav, 0);
		}
		else if(p_flac != NULL)
		{
			drflac_seek_to_pcm_frame((drflac *)p_flac, 0);
		}
	}
}

void	PulseAudio::Pause()
{
	pause = 1;
}

void	PulseAudio::Resume()
{
	pause = 0;
	if(stop == 1)
	{
		stop = 0;
	}
	int err = 0;
	if(is_microphone == 1)
	{
		pa_simple_flush(stream, &err);
	}
}

void	PulseAudio::Stop()
{
	pause = 1;
	stop = 1;
}

int	done = 0;

void grab_sample(PulseAudio *pa)
{
	write(STDOUT_FILENO, pa->buffer, pa->buffer_size);
}

void use_sample(PulseAudio *pa)
{
}


int	play_audio_process(char *device)
{
	SAMPLE *buffer = (SAMPLE *)malloc(1024 * sizeof(SAMPLE));
	PulseAudio *pa_play = new PulseAudio("alsa_output.pci-0000_00_1f.3.hdmi-stereo", MODE_PLAY, 4096, 44100, 2, buffer);
	pa_play->sample_ready_cb = use_sample;
	pa_play->Play();
	while(done == 0)
	{
		sleep(1);
	}
	pa_play->Pause();
	pa_play->Stop();
	delete pa_play;

	return(0);
}
