#include <stdio.h>
#include <string.h>
#include <pulse/pulseaudio.h>
#include <pulse/error.h>
#include <pulse/simple.h>

// Field list is here: http://0pointer.de/lennart/projects/pulseaudio/doxygen/structpa__sink__info.html
typedef struct pa_devicelist {
	uint8_t initialized;
	char name[512];
	uint32_t index;
	char description[256];
	int channels;
	int	rate;
} pa_devicelist_t;

typedef struct pa_default {
	char default_sink[4096];
	char default_source[4096];
} pa_default_t;

void pa_state_cb(pa_context *c, void *userdata);
void pa_sinklist_cb(pa_context *c, const pa_sink_info *l, int eol, void *userdata);
void pa_sourcelist_cb(pa_context *c, const pa_source_info *l, int eol, void *userdata);
int pa_get_devicelist(pa_devicelist_t *input, pa_devicelist_t *output);

// This callback gets called when our context changes state.  We really only
// care about when it's ready or if it has failed
void pa_state_cb(pa_context *c, void *userdata) {
	pa_context_state_t state;
	int *pa_ready = (int *)userdata;

	state = pa_context_get_state(c);
	switch  (state) {
		// There are just here for reference
		case PA_CONTEXT_UNCONNECTED:
		case PA_CONTEXT_CONNECTING:
		case PA_CONTEXT_AUTHORIZING:
		case PA_CONTEXT_SETTING_NAME:
		default:
			break;
		case PA_CONTEXT_FAILED:
		case PA_CONTEXT_TERMINATED:
			*pa_ready = 2;
			break;
		case PA_CONTEXT_READY:
			*pa_ready = 1;
			break;
	}
}

// pa_mainloop will call this function when it's ready to tell us about a sink.
// Since we're not threading, there's no need for mutexes on the devicelist
// structure
void pa_sinklist_cb(pa_context *c, const pa_sink_info *l, int eol, void *userdata) {
	pa_devicelist_t *pa_devicelist = (pa_devicelist_t *)userdata;
	int ctr = 0;

	// If eol is set to a positive number, you're at the end of the list
	if (eol > 0) {
	return;
	}

	// We know we've allocated 16 slots to hold devices.  Loop through our
	// structure and find the first one that's "uninitialized."  Copy the
	// contents into it and we're done.  If we receive more than 16 devices,
	// they're going to get dropped.  You could make this dynamically allocate
	// space for the device list, but this is a simple example.
	for (ctr = 0; ctr < 16; ctr++) 
	{
		if(!pa_devicelist[ctr].initialized) 
		{
			strncpy(pa_devicelist[ctr].name, l->name, 511);
			strncpy(pa_devicelist[ctr].description, l->description, 255);
			pa_devicelist[ctr].index = l->index;
			pa_devicelist[ctr].channels = l->sample_spec.channels;
			pa_devicelist[ctr].rate = l->sample_spec.rate;
			pa_devicelist[ctr].initialized = 1;
			break;
		}
	}
}

// See above.  This callback is pretty much identical to the previous
void pa_sourcelist_cb(pa_context *c, const pa_source_info *l, int eol, void *userdata) 
{
	pa_devicelist_t *pa_devicelist = (pa_devicelist_t *)userdata;
	int ctr = 0;

	if(eol > 0)
	{
		return;
	}
	for(ctr = 0; ctr < 16; ctr++) 
	{
		if(!pa_devicelist[ctr].initialized) 
		{
			strncpy(pa_devicelist[ctr].name, l->name, 511);
			strncpy(pa_devicelist[ctr].description, l->description, 255);
			pa_devicelist[ctr].index = l->index;
			pa_devicelist[ctr].channels = l->sample_spec.channels;
			pa_devicelist[ctr].rate = l->sample_spec.rate;
			pa_devicelist[ctr].initialized = 1;
			break;
		}
	}
}

static void set_server_info( pa_context *context, const pa_server_info *info, void *userdata)
{
  pa_default_t *def = (pa_default *)userdata;
  pa_sample_spec ss;

  if(!info) 
  {
    return;
  }
  ss = info->sample_spec;
  strcpy(def->default_sink, info->default_sink_name);
  strcpy(def->default_source, info->default_source_name);
}


int pa_get_devicelist(pa_default_t *def, pa_devicelist_t *input, pa_devicelist_t *output) {
	// Define our pulse audio loop and connection variables
	pa_mainloop *pa_ml;
	pa_mainloop_api *pa_mlapi;
	pa_operation *pa_op;
	pa_context *pa_ctx;


	// We'll need these state variables to keep track of our requests
	int state = 0;
	int pa_ready = 0;

	// Initialize our device lists
	memset(input, 0, sizeof(pa_devicelist_t) * 16);
	memset(output, 0, sizeof(pa_devicelist_t) * 16);

	// Create a mainloop API and connection to the default server
	pa_ml = pa_mainloop_new();
	pa_mlapi = pa_mainloop_get_api(pa_ml);
	pa_ctx = pa_context_new(pa_mlapi, "test");

	// This function connects to the pulse server
	pa_context_connect(pa_ctx, NULL, (pa_context_flags_t)0, NULL);


	// This function defines a callback so the server will tell us it's state.
	// Our callback will wait for the state to be ready.  The callback will
	// modify the variable to 1 so we know when we have a connection and it's
	// ready.
	// If there's an error, the callback will set pa_ready to 2
	pa_context_set_state_callback(pa_ctx, pa_state_cb, &pa_ready);

	// Now we'll enter into an infinite loop until we get the data we receive
	// or if there's an error
	for (;;) {
	// We can't do anything until PA is ready, so just iterate the mainloop
	// and continue
	if (pa_ready == 0) {
		pa_mainloop_iterate(pa_ml, 1, NULL);
		continue;
	}
	// We couldn't get a connection to the server, so exit out
	if (pa_ready == 2) {
		pa_context_disconnect(pa_ctx);
		pa_context_unref(pa_ctx);
		pa_mainloop_free(pa_ml);
		return -1;
	}
	// At this point, we're connected to the server and ready to make
	// requests
	switch (state) {
		// State 0: we haven't done anything yet
		case 0:
			pa_op = pa_context_get_server_info(pa_ctx, set_server_info, def); // server info
			state++;
		break;
		case 1:
		// This sends an operation to the server.  pa_sinklist_info is
		// our callback function and a pointer to our devicelist will
		// be passed to the callback The operation ID is stored in the
		// pa_op variable
			if (pa_operation_get_state(pa_op) == PA_OPERATION_DONE) {
				pa_operation_unref(pa_op);
				pa_op = pa_context_get_sink_info_list(pa_ctx, pa_sinklist_cb, output);
		
				// Update state for next iteration through the loop
				state++;
			}
		break;
		case 2:
		// Now we wait for our operation to complete.  When it's
		// complete our pa_output_devicelist is filled out, and we move
		// along to the next state
			if (pa_operation_get_state(pa_op) == PA_OPERATION_DONE) {
				pa_operation_unref(pa_op);
	
				// Now we perform another operation to get the source
				// (input device) list just like before.  This time we pass
				// a pointer to our input structure
				pa_op = pa_context_get_source_info_list(pa_ctx, pa_sourcelist_cb, input);

				// Update the state so we know what to do next
				state++;
			}
		break;
		case 3:
			if (pa_operation_get_state(pa_op) == PA_OPERATION_DONE) {
				// Now we're done, clean up and disconnect and return
				pa_operation_unref(pa_op);
				pa_context_disconnect(pa_ctx);
				pa_context_unref(pa_ctx);
				pa_mainloop_free(pa_ml);
				return 0;
			}
		break;
		default:
			// We should never see this state
			fprintf(stderr, "in state %d\n", state);
		return -1;
	}
	// Iterate the main loop and go again.  The second argument is whether
	// or not the iteration should block until something is ready to be
	// done.  Set it to zero for non-blocking.
	pa_mainloop_iterate(pa_ml, 1, NULL);
	}
}

int	pulse_list_devices(char *default_source, char *default_sink, int in_or_out, int limit, char **list, char **description, int *index, int *channels, int *rate)
{
int ctr;

	static const pa_sample_spec pulse_ss =
	{
		.format = PA_SAMPLE_S16LE,
		.rate = (uint32_t)44100,
		.channels = (uint8_t)1
	};
	static const pa_buffer_attr ba = 
	{
		.maxlength = 8192,
		.tlength = 1,
		.prebuf = 1,
		.minreq = 1,
		.fragsize = 2048
	};
	int cnt = 0;

	pa_default_t def;

	// This is where we'll store the input device list
	pa_devicelist_t pa_input_devicelist[limit];

	// This is where we'll store the output device list
	pa_devicelist_t pa_output_devicelist[limit];

	if(pa_get_devicelist(&def, pa_input_devicelist, pa_output_devicelist) < 0) 
	{
		fprintf(stderr, "Error: failed to get device list\n");
		return(0);
	}
	if(list != NULL)
	{
		strcpy(default_source, def.default_source);
		strcpy(default_sink, def.default_sink);
		if(in_or_out == 0)
		{
			for(ctr = 0;ctr < limit;ctr++) 
			{
				if(!pa_output_devicelist[ctr].initialized) 
				{
					break;
				}
				list[cnt] = strdup(pa_output_devicelist[ctr].name);
				description[cnt] = strdup(pa_output_devicelist[ctr].description);
				index[cnt] = pa_output_devicelist[ctr].index;
				channels[cnt] = pa_output_devicelist[ctr].channels;
				rate[cnt] = pa_output_devicelist[ctr].rate;
				cnt++;
			}
		}
		else
		{
			for(ctr = 0;ctr < limit;ctr++) 
			{
				if(!pa_input_devicelist[ctr].initialized) 
				{
					break;
				}
				int error = 0;
				pa_simple *stream = pa_simple_new(NULL, "webcam", PA_STREAM_RECORD, pa_input_devicelist[ctr].name, "record", &pulse_ss, NULL, &ba, &error);
				if(stream != NULL)
				{
					if(pa_simple_get_latency(stream, &error) < 100000)
					{
						list[cnt] = strdup(pa_input_devicelist[ctr].name);
						description[cnt] = strdup(pa_input_devicelist[ctr].description);
						index[cnt] = pa_input_devicelist[ctr].index;
						channels[cnt] = pa_input_devicelist[ctr].channels;
						rate[cnt] = pa_input_devicelist[ctr].rate;
						cnt++;
					}
					pa_simple_free(stream);
				} 
			}
		}
	}
	return(cnt);
}
