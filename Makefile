# -*- makefile -*-

CEF := 1
OSG := 1

CEF_PATH=/home/laser/Downloads/OffScreenCEF/thirdparty/cef_binary

MARCH=-m64

# DBUG=-O3 $(MARCH) -D_FILE_OFFSET_BITS=64
DBUG=-ggdb $(MARCH) -D_FILE_OFFSET_BITS=64 -DDEBUG=1

EXAMPLES = cowcam intro

# MCXX=g++
# MCC=gcc
MCXX=clang++
MCC=clang

INCS = argv_split.h dr_mp3.h embed_app.h html_window.h muxer.h PulseAudio.h cowcam.h dr_flac.h dr_wav.h image_memory.h osg.h render_html.h vlc_window.h

# CFLAGS = $(DBUG) -fno-diagnostics-color -Wno-unused-result -Wno-write-strings -no-pie -fPIC -c -DFLTK_HAVE_CAIRO -D_GNU_SOURCE -D_REENTRANT -DFLTK_1_1 -I. -I/usr/local/include/opencv4 -I/usr/local/include -I/usr/X11R6/include -I/usr/include/cairo -I/usr/local/include/ndi -I/usr/include/cairo

CFLAGS = $(DBUG) -fno-diagnostics-color -Wno-unused-result -Wno-write-strings -fPIC -c -DFLTK_HAVE_CAIRO -D_GNU_SOURCE -D_REENTRANT -DFLTK_1_1 -I. -I/usr/local/include/opencv4 -I/usr/local/include -I/usr/X11R6/include -I/usr/include/cairo -I/usr/local/include/ndi -I/usr/include/cairo

LD = $(MCC)
#LDFLAGS = $(DBUG) -fPIC -no-pie -L/usr/local/lib -L/usr/lib -L/usr/X11R6/lib
LDFLAGS = $(DBUG) -fPIC -L/usr/local/lib -L/usr/lib -L/usr/X11R6/lib

AR = lib

CVLIBS = -lrt -ljpeg -lm -lxml2 -lfontconfig -lexpat -lfreetype -lpng -lz

STDDYN = -lopencv_imgproc -lopencv_videoio -lopencv_core -lopencv_imgcodecs -lopencv_highgui -lopencv_dnn -lopencv_objdetect -lavformat -lavcodec -lavutil -lswresample -lswscale -lavfilter -lpulse -lpulse-simple -lvlc -lcurl -luuid -lblend2d -lcairo -lfltk -lfltk_images -lrt -ljpeg -lXcursor -lX11 -lxcb -lXdmcp -lXau -lXext -lXtst -lm -lXft -lXrender -lXfixes -lXinerama -lXrender -lXcomposite -lxml2 -lfontconfig -lexpat -lfreetype -lfftw3 -lz -llzma -lvisca_ip -lbz2 -lircclient -lcjson -lmagic -lstdc++

all: $(EXAMPLES)

ifeq ($(CEF),1)
# NOTE libhtml_window.so is compiled with g++ (clang++ will core dump it)
libhtml_window.so : html_window.cpp $(INCS)
	@echo
	@echo "Compile HTML Window (CEF)"
	g++ $(DBUG) -fPIC -shared -DCEF_USE_SANDBOX -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -Wno-unused-parameter -Wno-write-strings -Wno-class-memaccess -I/usr/include/cairo -I$(CEF_PATH) -I$(CEF_PATH)/include html_window.cpp ./libcef.so $(CEF_PATH)/build/libcef_dll_wrapper/libcef_dll_wrapper.a -o libhtml_window.so
	cp libhtml_window.so ..
endif

ifeq ($(OSG),1)
libosg_camera.so: osg.cpp osg.h
	@echo
	@echo "Compile OSG Renderer"
	$(MCXX) $(DBUG) -fPIC -shared -Wno-deprecated-declarations -Wno-unused-parameter -Wno-write-strings osg.cpp -I/usr/include/cairo -L/usr/local/lib -L/usr/lib -L/usr/X11R6/lib -losg -losgViewer -losgDB -losgGA -o libosg_camera.so
	cp libosg_camera.so ..
endif

test_serial_ports.o: test_serial_ports.cpp
	@echo
	@echo "Compile Serial Port Tester"
	$(MCXX) -c test_serial_ports.cpp

cow_simple_pulse.o: cow_simple_pulse.c
	@echo
	@echo "Compile Simple PulseAudio"
	$(MCC) $(DBUG) -c cow_simple_pulse.c

curl.o: curl.cpp
	@echo
	@echo "Compile Curl Module"
	$(MCXX) $(DBUG) -c curl.cpp

irc.o: irc.c
	@echo
	@echo "Compile IRC Module"
	$(MCC) $(DBUG) -c irc.c

read_wave.o: read_wave.cpp
	@echo
	@echo "Compile Read Audio Wave"
	$(MCXX) -Wno-deprecated-declarations $(CFLAGS) read_wave.cpp

extract_video.o: extract_video.cpp
	@echo
	@echo "Compile Video Extractor"
	$(MCXX) -Wno-deprecated-declarations $(CFLAGS) extract_video.cpp

extract_audio.o: extract_audio.cpp
	@echo
	@echo "Compile Audio Extractor"
	$(MCXX) -Wno-deprecated-declarations $(CFLAGS) extract_audio.cpp

vlc_window.o: vlc_window.cpp
	@echo
	@echo "Compile VLC Window"
	$(MCXX) $(CFLAGS) vlc_window.cpp

muxer.o: muxer.cpp $(INCS)
	@echo
	@echo "Compile Muxer Module"
	$(MCXX) -D__STDC_CONSTANT_MACROS $(CFLAGS) -I$(CEF_PATH) -I$(CEF_PATH)/include muxer.cpp

PulseAudio.o: PulseAudio.cpp $(INCS)
	@echo
	@echo "Compile PulseAudio Module"
	$(MCXX) -D__STDC_CONSTANT_MACROS $(CFLAGS) PulseAudio.cpp

pulse_devices.o: pulse_devices.cpp $(INCS)
	@echo
	@echo "Compile Pulse Device Detection"
	$(MCXX) -D__STDC_CONSTANT_MACROS $(CFLAGS) pulse_devices.cpp

embed_app.o : embed_app.cpp $(INCS)
	@echo
	@echo "Compile Embedded App Module"
	$(MCXX) $(CFLAGS) embed_app.cpp

cowcam.o: cowcam.cpp $(INCS) 
	@echo
	@echo "Compile CowCam"
	$(MCXX) -D__STDC_CONSTANT_MACROS $(CFLAGS) -I$(CEF_PATH) -I$(CEF_PATH)/include cowcam.cpp 

networking.o: networking.cpp $(INCS)
	@echo
	@echo "Compile Networking Module"
	$(MCC) $(CFLAGS) networking.cpp 

cowcam: cowcam.o test_serial_ports.o embed_app.o networking.o pulse_devices.o PulseAudio.o muxer.o vlc_window.o extract_video.o extract_audio.o curl.o cow_simple_pulse.o irc.o read_wave.o libhtml_window.so libosg_camera.so
	@echo
	@echo "Link cowcam"
	$(LD) -o cowcam $(LDFLAGS) cowcam.o test_serial_ports.o embed_app.o networking.o pulse_devices.o PulseAudio.o muxer.o vlc_window.o extract_video.o extract_audio.o curl.o cow_simple_pulse.o irc.o read_wave.o -Xlinker -Bdynamic $(STDDYN)

intro: intro.cpp intro.h
	@echo
	@echo "Make intro"
	$(MCXX) -I/usr/include/cairo intro.cpp -o intro -L/usr/local/lib -lfltk
	cp -v intro ..
