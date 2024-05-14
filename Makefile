# -*- makefile -*-

CEF_PATH=/home/laser/Downloads/OffScreenCEF/thirdparty/cef_binary

MARCH=-m64

# DBUG=-O3 $(MARCH) -D_FILE_OFFSET_BITS=64
DBUG=-ggdb $(MARCH) -D_FILE_OFFSET_BITS=64

EXAMPLES = cowcam 

CC = g++

INCS = argv_split.h dr_mp3.h embed_app.h html_window.h muxer.h PulseAudio.h cowcam.h dr_flac.h dr_wav.h image_memory.h osg.h render_html.h vlc_window.h

CFLAGS = $(DBUG) -fno-diagnostics-color -Wno-unused-result -Wno-write-strings -no-pie -fPIC -c -D_GNU_SOURCE -D_REENTRANT -DFLTK_1_1 -I. -I/home/laser/Downloads/fltk-1.4.x-20231110-ff134f00 -I/usr/local/include/opencv4 -I/usr/local/include -I/usr/X11R6/include -I/usr/include/cairo

LD = $(CC)
LDFLAGS = $(DBUG) -fPIC -no-pie -L/home/laser/Downloads/fltk-1.4.x-20231110-ff134f00/build/lib -L/usr/local/lib -L/usr/lib -L/usr/X11R6/lib

AR = lib

CVLIBS = -lrt -ljpeg -lm -lxml2 -lfontconfig -lexpat -lfreetype -lpng -lz

# STDDYN = -lopencv_imgproc -lopencv_videoio -lopencv_core -lopencv_imgcodecs -lopencv_highgui -lopencv_dnn -lopencv_objdetect -losg -losgViewer -losgDB -losgGA -lavformat -lavcodec -lavutil -lswresample -lswscale -lavfilter -lpulse -lpulse-simple -lvlc -lcurl -luuid -lblend2d -lcairo -lfltk -lfltk_images -lrt -ljpeg -lXcursor -lX11 -lxcb -lXdmcp -lXau -lXext -lXtst -lm -lXft -lXrender -lXfixes -lXinerama -lXrender -lXcomposite -lxml2 -lfontconfig -lexpat -lfreetype -lpng -lz -llzma -lbz2 -lvisca -lbz2
STDDYN = -lopencv_imgproc -lopencv_videoio -lopencv_core -lopencv_imgcodecs -lopencv_highgui -lopencv_dnn -lopencv_objdetect -lavformat -lavcodec -lavutil -lswresample -lswscale -lavfilter -lpulse -lpulse-simple -lvlc -lcurl -luuid -lblend2d -lcairo -lfltk -lfltk_images -lrt -ljpeg -lXcursor -lX11 -lxcb -lXdmcp -lXau -lXext -lXtst -lm -lXft -lXrender -lXfixes -lXinerama -lXrender -lXcomposite -lxml2 -lfontconfig -lexpat -lfreetype -lpng -lz -llzma -lbz2 -lvisca -lbz2

CVDYN = -ldl -lopencv_imgproc -lopencv_videoio -lopencv_core -luuid

all: $(EXAMPLES)

libhtml_window.so : html_window.cpp $(INCS)
	g++ $(DBUG) -fPIC -shared -DCEF_USE_SANDBOX -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -Wno-unused-parameter -Wno-write-strings -Wno-class-memaccess -I$(CEF_PATH) -I$(CEF_PATH)/include html_window.cpp ./libcef.so $(CEF_PATH)/build/libcef_dll_wrapper/libcef_dll_wrapper.a -o libhtml_window.so

libosg_camera.so: osg.cpp osg.h
	g++ $(DBUG) -fPIC -shared -Wno-deprecated-declarations -Wno-unused-parameter -Wno-write-strings osg.cpp -L/home/laser/Downloads/fltk-1.4.x-20231110-ff134f00/build/lib -L/usr/local/lib -L/usr/lib -L/usr/X11R6/lib -losg -losgViewer -losgDB -losgGA -o libosg_camera.so

test_serial_ports.o: test_serial_ports.cpp
	g++ -c test_serial_ports.cpp

cow_simple_pulse.o: cow_simple_pulse.c
	gcc -c cow_simple_pulse.c

extract_video.o: extract_video.cpp
	g++ -Wno-deprecated-declarations $(CFLAGS) extract_video.cpp

extract_audio.o: extract_audio.cpp
	g++ -Wno-deprecated-declarations $(CFLAGS) extract_audio.cpp

vlc_window.o: vlc_window.cpp
	g++ $(CFLAGS) vlc_window.cpp

muxer.o: muxer.cpp $(INCS)
	g++ -D__STDC_CONSTANT_MACROS $(CFLAGS) -I$(CEF_PATH) -I$(CEF_PATH)/include muxer.cpp

PulseAudio.o: PulseAudio.cpp $(INCS)
	g++ -D__STDC_CONSTANT_MACROS $(CFLAGS) PulseAudio.cpp

pulse_devices.o: pulse_devices.cpp $(INCS)
	g++ -D__STDC_CONSTANT_MACROS $(CFLAGS) pulse_devices.cpp

embed_app.o : embed_app.cpp $(INCS)
	g++ $(CFLAGS) embed_app.cpp

cowcam.o: cowcam.cpp $(INCS) 
	$(CC) -D__STDC_CONSTANT_MACROS $(CFLAGS) -I$(CEF_PATH) -I$(CEF_PATH)/include cowcam.cpp 

networking.o: networking.cpp $(INCS)
	$(CC) $(CFLAGS) networking.cpp 

cowcam: cowcam.o test_serial_ports.o embed_app.o networking.o pulse_devices.o PulseAudio.o muxer.o vlc_window.o extract_video.o extract_audio.o cow_simple_pulse.o libhtml_window.so libosg_camera.so
	$(LD) -o cowcam $(LDFLAGS) cowcam.o test_serial_ports.o embed_app.o networking.o pulse_devices.o PulseAudio.o muxer.o vlc_window.o extract_video.o extract_audio.o cow_simple_pulse.o -Xlinker -Bdynamic $(STDDYN)
