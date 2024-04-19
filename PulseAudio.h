typedef short SAMPLE;

#define	MODE_RECORD	0
#define	MODE_PLAY	1

class	PulseAudio
{
public:
				PulseAudio(char *device, int direction, int in_number_of_samples, int in_hz, int in_number_of_channels, SAMPLE *default_buffer);
				~PulseAudio();

	void		Record();
	void		Play();
	void		Stop();
	void		Pause();
	void		Resume();
	void		Run();

	int			SampleAudioFile();

	int			failure;
	int			stop;
	int			stopped;
	int			pause;
	int			mute;
	int			mode;
	int			shutdown;
	SAMPLE		*buffer;
	int			number_of_samples;
	int			number_of_channels;
	int			sample_count;
	void		(*sample_ready_cb)(PulseAudio *);
	pa_simple	*stream;
	int			hz;
	int			buffer_size;
	double		volume;
	char		*device;
	double		average;
	int			is_microphone;
	void		*p_mp3;
	void		*p_wav;
	void		*p_flac;
	int			repeating;
};

