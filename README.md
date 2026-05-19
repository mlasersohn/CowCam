DVPTZ is an elaborate video and audio management systems for Linux. It accepts video inputs through all sources accepted by OpenCV,
as well as several other sources including NDI® (NDI is registered trademark of Vizrt NDI AB), still and video files, real-time 3D
rendering, HTML rendering, pipes, plugins, and much else. Audio sources include all those supported by PulseAudio as well as several
other audio file formats. It supports PTZ cameras using Visca, either through the network or USB. Optionally, PTZ functionality can
be accessed through NDI or V4L functions. Output to various video file formats is supported as well as numerous streaming formats.
Realtime streaming to streaming sites, such as Twitch and Youtube is also provided. There are too many features to list here. See below
for a cursory rundown.

# Building
The Makefile defaults to mostly using the clang C++ compiler. Switching it over to only using g++ and gcc is a simple matter of editing
the lines, selecting which pair you mean to use:

MCXX=g++
MCC=gcc

or

MCXX=clang++
MCC=clang

One of the several files that need to be compiled, "libhtml_window.so" must be compiled with g++, not clang++, so you must
have the gnu compiler available to make this optional shared library.

To build DVPTZ, you must have installed the following libraries:

## Required Libraries
### OpenCV (4.5.2 or greater, likely required)
libopencv_imgproc
libopencv_videoio
libopencv_core
libopencv_imgcodecs
libopencv_highgui
libopencv_dnn
libopencv_objdetect

### AV/FFMPEG (58.76.100 or greater, might be required)
libavformat
libavcodec
libavutil
libswresample
libswscale
libavfilter

### Pulse Audio (0.24.1)
libpulse
libpulse-simple
                                                                                       1,1           Top
