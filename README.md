# CowCam
© 2025 Mark Lasersohn

CowCam is an elaborate video and audio management systems for Linux. It accepts video inputs through all sources accepted by OpenCV
(USB/UVC cameras, IP videos, and video files of various formats) as well as several other sources including NDI® (NDI is registered 
trademark of Vizrt NDI AB), still and video files, real-time 3D rendering, HTML rendering, pipes, plugins, text files, some vector 
formats, and much else. Audio sources include all those supported by PulseAudio as well as several other audio file formats. It 
supports PTZ cameras using Visca, either through the network or USB. Optionally, PTZ functionality can be accessed through NDI or 
V4L functions. Output to various video file formats is supported as well as numerous streaming formats. Realtime streaming to 
streaming sites, such as Twitch and Youtube is also provided. There are too many features to list here. See below for a cursory 
rundown.

# Building
First, let me apologize for still using a simple Makefile in this day and age. I am old fashioned because I am old. The Makefile
works for me and because, until recently, I was the only person even considering compiling this program, I didn't see any reason
to dedicate time towards changing that out. Fortunately, though it uses many libraries, the program is not composed of many pieces nor
requires terribly obscure libraries or especially unique versions of the libraries it does use. The most daunting of these is optional
use of CEF. Building CEF is a bit of trial and few system's provide it already built. The most obscure is probably libvisca-ip, the 
IP enabled version of libvisca. 

It was quite a while ago since I gathered all the libraries needed to compile this program, so forgive me while I rummage through fading
memories. To the best I can recollect, these came from somewhat obscure third parties rather than part of my system's repositories or
other more obvious sources:

I believe I got libvisca-ip from: https://github.com/norihiro/libvisca-ip.
<br>
libcjson is available at: https://github.com/DaveGamble/cJSON
<br>
libfftw3 might be from: https://github.com/FFTW/fftw3
<br>
libblend2d: came from https://blend2d.com/
<br>
This might be the source for libirclient: https://github.com/shaoner/libircclient

The Makefile defaults to mostly using the clang C++ compiler. Switching it over to only using g++ and gcc is a simple matter of editing
the lines, selecting which pair you mean to use:
```
MCXX=g++
MCC=gcc
```
or
```
MCXX=clang++
MCC=clang
```
One of the several files that need to be compiled, "libhtml_window.so" must be compiled with g++, not clang++, so you must
have the gnu compiler available to make this optional shared library.

To build CowCam, you must have installed the following libraries:

## Required Libraries
### OpenCV (4.5.2 or greater, likely required)
libopencv_imgproc\
libopencv_videoio\
libopencv_core\
libopencv_imgcodecs\
libopencv_highgui\
libopencv_dnn\
libopencv_objdetect

### AV/FFMPEG (58.76.100 or greater, might be required)
libavformat\
libavcodec\
libavutil\
libswresample\
libswscale\
libavfilter

### Pulse Audio (0.24.1)
libpulse\
libpulse-simple

### VLC
libvlc

### Curl
libcurl

### Cairo
libcairo

### FLTK (1.4 or greater, required)
libfltk\
libfltk_images

### X11
libXcursor\
libX11\
libxcb\
libXdmcp\
libXau\
libXext\
libXtst\
libm\
libXft\
libXrender\
libXfixes\
libXinerama
libXrender\
libXcomposite

### VISCA
libvisca_ip

### JSON
libcjson

### Font
libfontconfig\
libexpat\
libfreetype

### Fourier
libfftw3

### XML
libxml2

### Blend2D
libblend2d

### JPEG
libjpeg

### IRC (should one day be made optional)
libircclient

### Misc
libuuid\
librt\
libz\
liblzma\
libbz2\
libmagic\
stdc++

## Optional Libraries
### Open Scene Graph
To build the optional library "libosg_camera.so" which supports OSG (rendered 3D models as a video sources),
you must have the following OSG libraries installed:

libosg\
libosgViewer\
libosgDB\
libosgGA

If you do not want to build in OSG support, edit or delete the following line in the Makefile:
```
OSG := 1
```
### CEF and libhtml_window.so
To build the optional library "libhtml_window.so" which supports rendering HTML as a video source, you
must set the value of '$(CEF_PATH)' in the Makefile to point at the directory where CEF keeps its include
files and have the following CEF libraries installed:
```
libcef.so ; copied right into the CowCam build directory
$(CEF_PATH)/build/libcef_dll_wrapper/libcef_dll_wrapper.a; down under '$(CEF_PATH)' somewhere
```
If you do not want to build in CEF support, edit or delete the following line in the Makefile:
```
CEF := 1
```
At runtime, if libhtml_window.so is available, libcef.so must also be available. There must also 
be an icedtl.dat file and the entire "assets" directory as supplied in the CEF build environment.

### NDI
if libndi.so is available during runtime, Cowcam will attempt to open it and use the NDI functions
it makes available. At runtime.

Once you have installed all of the necessary libraries and have edited the Makefile appropriately (if necessary), building 
CowCam is simply a matter of invoking make: 
```
$ make
or
$ make -f Makefile
```
# Running
In the simplest case, running CowCam is just a matter of invoking the executable, "cowcam". This will cause the program to
invoke the "intro" executable by default, which will display status messages as the cowcam program starts. During this
period, cowcam will scan your system ("/dev" directories) for cameras and microphones and various other audio sources. There
are many startup flags and arguments allowing you to customize cowcam on startup as well as bypass the scan and specify
exactly which audio and video sources you wish to have available during startup.

## Arguments:
#### Specify a video device
`cowcam --source=/dev/video0`

#### Specify a device and a backend
`cowcam --source=/dev/video0::V4L`

#### Specify a device and an alias
`cowcam --source=/dev/video0[alias=Sony]`

####  Specify a device and a backend with fourcc code (must be 4 characters long)
`cowcam --source=/dev/video0::V4L:MJPG`

####  Specify an audio input device
`cowcam --audio_source=alsa_input.usb-audio-technica____AT2020_USB-00.analog-stereo`

####  Load a full setup. This will overwrite most other options.
`cowcam --load=your_file.setup`

####  Use an IP camera at a RTSP URL with login and password
`cowcam --source=rtsp://your_login:your_password@url_for_your_webcam.org/live`

####  Use USB camera number 4
`cowcam --source=4`

####  Set main window width to 1920, Defaults to fullscreen.
`cowcam --main_width=1920`

####  Set main window height to 1080, Defaults to fullscreen.
`cowcam --main_width=1080`

####  Set preferred video width to 640
`cowcam --width=640`

####  Set preferred video height to 480
`cowcam --height=480`

####  Scale the interface to system wide screen scaling.
`cowcam --auto_scale`

####  Force a scaling factor to the interface.
`cowcam --forced_scale=2.0`

####  Set preferred output video width to 1280. Output defaults to input.
`cowcam --output_width=1280`

####  Set preferred output video height to 720. Output defaults to input.
`cowcam --output_height=720`

####  Set preferred display video width to 1280. Display defaults to input.
`cowcam --display_width=1280`

####  Set preferred display video height to 720. Display defaults to input.
`cowcam --display_height=720`

####  Set the FPS to a specific value, avoiding testing
`cowcam --fps=18`

####  Sets the interval between frames to a rigid length. Specified in seconds.
`cowcam --interval=0.01`

####  Split the main screen between all the video sources
`cowcam --split`

####  Record audio and video to raw files (unmuxed) and mux as a separate step.
`cowcam --buffered`

####  Flip horizontally or vertically or both
`cowcam --flip=horizontal --flip=vertical`

####  Do not record audio.
`cowcam --no_audio`

####  Reopen old .bin (temporary files) to encode. Record is turned off.
`cowcam --old`

####  Do not scan for USB cameras.
`cowcam --no_scan`

####  Do not scan for input audio devices.
`cowcam --no_audio_scan`

####  Scan for PTZ serial ports.
`cowcam --scan_for_ptz`

####  Record entire main window, encoding on exit. Usually used to make tutorial videos for the program itself.
`cowcam --record_main_window`

####  Record the desktop as another camera.
`cowcam --record_desktop`

####  Record the desktop as another camera, specifying area to record as x,y,w,h.
`cowcam --record_desktop=20,40,640,360`

####  Record each recording camera to its own file.
`cowcam --multi_stream`

####  Display the camera that is currently recording.
`cowcam --display_recording_camera`

####  Recording follows the displayed camera.
`cowcam --recording_follows_display`

####  Blend automatically between cuts when editing with the previewer.
####  Also fades in and out from black at the beginning and end.
`cowcam --transition=blend`

####  Allows for PTZ camera control using VISCA over the specified serial port. A colon following the path
####  followed by a 1, indicates that this interface does not reply.
`cowcam --ptz=/dev/ttyUSB0:1`

####  Reset PTZ cameras to home position on launch.
`cowcam --ptz_home.`

####  Initialize object detection. Without this object detection is not offered.
`cowcam --detect`

####  Use alternate DNN/YOLO files for recognition. If anyone one of these is provided, the other two must also be present. The default values are:
#####   "yolov3-openimages.cfg"
#####  	"yolov3-openimages.weights"
#####  	"openimages.names"
####  Or, depending on the value of --yolo_model=
#####  	"yolov3.cfg"
#####  	"yolov3.weights"
#####  	"coco.names"
`cowcam --yolo_cfg=cfg_filename --yolo_weights=weights_filename --yolo_names=names_filename`

####  Use the default YOLO filenames for COCO or OpenImages. This defaults to OpenImages.
`cowcam --yolo_model=coco`

####  If JPEG streaming is turned on, stream the current camera's image to
####  a custom server running at www.example.com on port 20000. Port 20001
####  will be used as the PTZ control port. If port 10000 was selected
####  port 10001 would be the control port.
`cowcam --jpeg_streaming=www.example.com:20000`

####  Stream to a streaming server like Twitch or YouTube Live.
#####  The entire URL must be specifed, including the protocol specifier
#####  i.e.: smpt:// or rtmp://, etc. and any other URL embedded arguments
#####  like your key
`cowcam --streaming=rtmp://www.streaming_server.com/your_key`

####  Stream to the server specified in --streaming= or save to a muxed file if no server is specified.
`cowcam --streaming_only`

####  Streaming audio quality expressed as a factor. The default is best. Base value is 11025 hz, so.
#####  cowcam --streaming_audio_quality=good would be 11025 hz.
#####  cowcam --streaming_audio_quality=better would be 22050 hz.
#####  cowcam --streaming_audio_quality=best would be 44100 hz.
`cowcam --streaming_audio_quality=good`

####  Embed the picture in picture stream into the recorded output.
`cowcam --embed_pip`

####  Set the position of the picture in picture.
`cowcam --pip_position=0.8,0.1`

####  Set the rgb color of the border around the pip. Set it to -1,-1,-1 for no border.
`cowcam --pip_highlight=255,128,64`

####  Set the size of pip as fraction of its real size. The default is 1/4th (ie: 0.25)
`cowcam --pip_size=0.35`

####  Allows for more than one pip.
`cowcam --multipip=right`

####  Set the grid size for placement of sources. Default is 1 for no grid.
`cowcam --grid_size=10`

####  Set the desktop audio monitor device (a null sink in pulseaudio).
`cowcam --desktop_monitor=my_null_sink`

####  Do not query the system for available codecs and offer a menu of options.
`cowcam --no_query_codecs`

####  Test the codecs found at current settings to determining if they are usable,
####  eliminating those that are not from the offered options.
`cowcam --test_codecs`

####  Timestamp video images.
`cowcam --timestamp`

####  Disregard video setting when starting, using defaults and command line arguments instead.
`cowcam --disregard_settings`

####  Cause the primary interface elements to have a transparent background.
`cowcam --transparent_interface`

####  When scaling input images to output, keep aspect ratio and border excess.
`cowcam --no_frame_scaling`

####  Crop image to display size rather than scaling it.
`cowcam --crop_display`

####  Crop image to output size rather than scaling it.
`cowcam --crop_output`

####  Add a plugin transition library file to be searched.
`cowcam --transition=filename.so`

####  Add a plugin transition from the library specified in --transition_plugin_file=...
`cowcam --transition_plugin=transition_name`

####  Add a plugin filter library file to be searched.
`cowcam --filter_plugin_file=filename.so`

####  Add a plugin filter from the library specified in --filter_plugin_file=...
`cowcam --filter_plugin=filter_name`

####  Add a screen capture plugin library file to be searched.
`cowcam --capture_plugin_file=filename.so`

####  Force GUI elements to persist on the screen rather than appearing when the mouse approaches.
```
cowcam --retain_commands
cowcam --retain_cameras
cowcam --retain_audio
cowcam --retain_ptz
```
####  Force all GUI elements to persist on the screen rather than appearing when the mouse approaches.
`cowcam --lock_panels`

####  Animate (slide) the GUI elements when the mouse approaches.
`cowcam --animate_panels`

####  Do not allow the user to change directories in the file selection dialog.
`cowcam --exclude_directories`

####  Hide the status message.
`cowcam --hide_status`

####  Select a camera to be active.
`cowcam --select_camera=camera_name`

####  Select an audio source to be active.
`cowcam --select_audio=audio_device_name`

For example, when starting cowcam, I use the following options:
```
cowcam --animate_panels --no_scan --source=/dev/v4l/by-id/usb-054c_SRG-120DU_Series-video-index0[alias="Sony SRG-120DU"] --source=/dev/v4l/by-id/usb-AVer_Inc._CAM520_5308138900019-video-index0::V4L2:MJPG[alias="Aver 520"] "--source=ndi_p216://NDI_HX (BZBGEAR-NDI-787264200195)"[alias="BZBGear"] --no_frame_scaling --yolo_model=coco --streaming_only --width=1280 --height=720 --container=flv --detect --ptz=udp://192.168.0.100:52381[alias="Sony"][lock="Sony SRG-120DU"][bind="Sony SRG-120DU"] --ptz=/dev/ttyUSB0[alias="Aver"][lock="Aver 520"][bind="Aver 520"] --ptz=tcp://192.168.0.146:1259[alias="BZBGear"][lock="BZBGear"][bind="BZBGear"] --recording_follows_display --message_delay=250000
```
This allows me to open my Sony SRG-120DU as a USV/UVC device, my AVer CAM520 as another USB/UVC device, and my BZBGear camera as an NDI device. I am
setting up YOLO object detection using coco. I set the resolution to 1280 and 720 with a default container of FLV. I also setup PTZ over UDP for the
Sony, through USB for the Aver, and through TCP (NDI) for the BZBGear camera. Furthermore, I set the system to record which ever camera is displayed.

Most, maybe all of these options can be set once within the program, as well as many more. 

# Some of the Features
Cowcam allows the user to save the state of the entire system as well as the state of any of the cameras or other sources. Within the program, 
or using the --source= flag, you can select between dozens of supported input sources. You can also set hundreds (thousands?) of combinations 
of containers, and audio and video codecs, for output files; the exact number depending on how many you have licensed/installed on your system 
and made available to the ffmpeg library. Many container formats for images, audio, and video are also available as input sources.

Cowcam is also capable of streaming to the usual stream receiving websites, including Twitch, YouTube, and Facebook as well as any others that allow
for RTMP protocol. Cowcam can also be used as a NDI source on output for other programs, devices, or sites.

Cowcam has many features including transitions; various sorts of plug-ins for audio and video effects and GUI elements; render HTML both locally and 
from the websites, including entire websites; drawing various graphics directly on the incoming video, including fonts and text; picture in picture 
from multiple sources; detecting objects and labeling them; triggering recording based on object recognition, motion, time of day, interval, and 
changing light conditions. Cowcam allows for multiple audio sources to be mixed or muted, including recording the output of other programs. The 
entire desktop or individual windows can also be captured as video sources, allowing for game-play to be streamed.

Cowcam supports control over PTZ cameras using VISCA. If the camera does not provide VISCA through either USB, RS232, or TCP/UDP, Cowcam will 
attempt to control the camera through the PTZ functions supported by V4L2. Through VISCA, Cowcam supports pan, tilt, zoom, focus, as well as
turning on and off many optional camera features such as autofocus, auto-exposure, and much more. Almost all of the VISCA parameters are
adjustable.

Cowcam's user interface was built primarily with FLTK, with a lot of help from Cairo and OpenCV. It provides many examples of how to do things
with these libraries and also quite a few examples of how not to do things with the same libraries. As that much of this code is experimental
and some of it is ill-advised, borrow and run this code at your own risk. I will support you in a haphazard and willy-nilly sort of way, so
do not expect timely answers to questions, nor will I defend myself or this program from criticism of any sort. I'd rather have fun.

# LICENSE
This source code is copyrighted by Mark Lasersohn &copy; 2025. You are licensed to use any portion of it for any non-nefarious
purpose. I am not responsible in any way for anything that happens to you or anyone else if you do. I make no claim that this
program or any of the code you might lift from it does much of anything you might want. It might, but then I am not entirely
sure you and I agree on terminology. I would appreciated attribution if you find the software useful, but keep my name out of it 
when your boss is looking for someone to blame. If you are seeking attribution for a library I am using and you authored, please
let me know. I will be happy to set your name down here and in the placard that appears when CowCam starts.

As they say:
THIS SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

# Bye
Farewell and have fun.
Mark Lasersohn
