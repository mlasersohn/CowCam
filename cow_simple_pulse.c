#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <pulse/pulseaudio.h>
#include <pulse/thread-mainloop.h>
#include <pulse/xmalloc.h>

#include <pulse/error.h>
#include <pulse/simple.h>

struct pa_simple {
    pa_threaded_mainloop *mainloop;
    pa_context *context;
    pa_stream *stream;
    pa_stream_direction_t direction;

    const void *read_data;
    size_t read_index, read_length;

    int operation_success;
};

long int local_precise_time()
{
struct timeval tv;
	 
	gettimeofday(&tv, NULL);
	long int ts = (tv.tv_sec * 1000000) + tv.tv_usec;
	return(ts);
}

int cow_simple_read(pa_simple *p, void *data, size_t length, int *rerror) {

    pa_threaded_mainloop_lock(p->mainloop);

    int fail_cnt = 0;
    while (length > 0) {
        size_t l;

        while (!p->read_data) {
            int r;

            r = pa_stream_peek(p->stream, &p->read_data, &p->read_length);
            if(r != 0) {
                goto unlock_and_fail;
            }
            if (p->read_length <= 0) {
                if((p->read_data == NULL) && (p->read_length <= 0)) {
                    fail_cnt++;
                    if(fail_cnt > 10) {
                        goto unlock_and_fail;
                    }
                }
                pa_threaded_mainloop_wait(p->mainloop);
            } else if (!p->read_data) {
                /* There's a hole in the stream, skip it. We could generate
                 * silence, but that wouldn't work for compressed streams. */
                r = pa_stream_drop(p->stream);
                fail_cnt = 0;
                if(r != 0) {
                    goto unlock_and_fail;
                }
            } else {
                p->read_index = 0;
                fail_cnt = 0;
            }
        }
        l = p->read_length < length ? p->read_length : length;
        memcpy(data, (const uint8_t*) p->read_data+p->read_index, l);

        data = (uint8_t*) data + l;
        length -= l;

        p->read_index += l;
        p->read_length -= l;

        if (!p->read_length) {
            int r;

            r = pa_stream_drop(p->stream);
            p->read_data = NULL;
            p->read_length = 0;
            p->read_index = 0;
            if(r != 0) {
                goto unlock_and_fail;
            }
        }
    }
    pa_threaded_mainloop_unlock(p->mainloop);
    return 0;

unlock_and_fail:
    pa_threaded_mainloop_unlock(p->mainloop);
    return -1;
}
