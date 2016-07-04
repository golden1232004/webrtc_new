**WebRTC is a free, open software project** that provides browsers and mobile
applications with Real-Time Communications (RTC) capabilities via simple APIs.
The WebRTC components have been optimized to best serve this purpose.

**Our mission:** To enable rich, high-quality RTC applications to be
developed for the browser, mobile platforms, and IoT devices, and allow them
all to communicate via a common set of protocols.

The WebRTC initiative is a project supported by Google, Mozilla and Opera,
amongst others. This page is maintained by the Google Chrome team.

### Development

See http://www.webrtc.org/native-code/development for instructions on how to get
started developing with the native code.

### More info

 * Official web site: http://www.webrtc.org
 * Master source code repo: https://chromium.googlesource.com/external/webrtc
 * Samples and reference apps: https://github.com/webrtc
 * Mailing list: http://groups.google.com/group/discuss-webrtc
 * Continuous build: http://build.chromium.org/p/client.webrtc

---------------

### webrtc_new
construct webrct with cmake based on newest source code

* usage:

 * git clone this repsotory
 * cd webrtc_new
 * git submodule init
 * git submodule update
 * mkdir build && cd build
 * cmake .. or cmake-gui ..
 * make -j4

* third_party

 * openssl(lib name is ssl) and cryto
 * opus: it is constructed by make. so compile indiviually
 * ffmpeg: comile indiviually (TODO)
 * libvpx: compile individually and make install. maybe install yasm first
 * openh264: use branch openh264v1.5. Because the newest version delete sSliceCfg of struct SSpatialLayerConfig.


* auxiliary lib

 * libgtk2.0-dev(not 3.0, the lib is libgtk-x11-2.0.so), glib, atk, cairo, pango, gdk2.0( lib name is libgdk-x11-2.0.so)
 * X11 lib: XQuartz(for mac os x), libx11-dev(for linux)


* Note: type

 * ATOM (windows type)
 * *.pb.h:  pb is the shortcut of platform build, WEBRTC_ANDROID_PLATFORM_BUILD

* config and compile problem
 * cmake missing:JPEG_LIBRARY JPEG_INCLUDE_DIR; install libjpeg-dev