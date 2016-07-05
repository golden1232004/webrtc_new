cmake_minimum_required(VERSION 2.6)
project(peerconnection_client)

if (CMAKE_SYSTEM_NAME MATCHES "Darwin")
  include_directories(/usr/local/Cellar/openssl/1.0.2h_1/include)
  include_directories(/usr/local/Cellar/gtk+/2.24.30/include/gtk-2.0/)
  include_directories(/usr/local/Cellar/glib/2.46.2/include/glib-2.0/)
  include_directories(/usr/local//Cellar/glib/2.46.2/lib/glib-2.0/include/)
  include_directories(/usr/local//Cellar/cairo/1.14.6_1/include/cairo/)
  include_directories(/usr/local//Cellar/pango/1.38.1/include/pango-1.0/)
  include_directories(/usr/local//Cellar/gtk+/2.24.30/lib/gtk-2.0/include/)
  include_directories(/usr/local//Cellar/gdk-pixbuf/2.32.3/include/gdk-pixbuf-2.0/)
  include_directories(/usr/local//Cellar/atk/2.18.0_1/include/atk-1.0/)
elseif (CMAKE_SYSTEM_NAME STREQUAL "Linux")
  include_directories(/usr/include/gtk-2.0/)
  include_directories(/usr/include/glib-2.0/)
  include_directories(/usr/lib/x86_64-linux-gnu/glib-2.0/include/)
  include_directories(/usr/include/cairo/)
  include_directories(/usr/include/pango-1.0/)
  include_directories(/usr/lib/x86_64-linux-gnu/gtk-2.0/include/)
  include_directories(/usr/include/gdk-pixbuf-2.0/)
  include_directories(/usr/include/atk-1.0/)
endif ()

include_directories(${CMAKE_SOURCE_DIR})
include_directories(./include)
file(GLOB src_file ./src/*.cc)

add_library(peerconnection_client STATIC ${src_file})

set(EXT_LIB pthread  dl rt  gtk-x11-2.0 glib-2.0 atk-1.0 pango-1.0 cairo gdk-x11-2.0 gobject-2.0 jpeg) #auxiliary lib 
set(3RDPARTY_LIB ssl crypto jsoncpp yuv vpx)
link_directories(${CMAKE_SOURCE_DIR}/build/bin) # otherwise, can not find libjsoncpp.a, I do not know the reason.
add_executable(peerconnection_client_example test/main.cc)

set(SOURCE_LIB peerconnection_client api pc media p2p common_video  module_video_capture module_audio_coding common_audio   module_call video module_video_coding module_pacing module_video_processing rtp_rtcp  module_utility system_wrappers audio congestion_controller voice_engine webrtc base)

# call <- video <- module_video_coding
               #<- module_pacing
               #<- module_video_processing(TODO)




# video <- call
       #<- common_video

# rtp_rtcp <- common_video

# congestion_controller <- module_remote_bitrate_estimator (TODO)
                       #<- module_pacing
                       #<- module_bitrate_controller (TODO)

#voice_engine <- module_audio_processing (TODO)
             #<- module_audio_coding
             #<- module_utility



target_link_libraries(peerconnection_client_example ${SOURCE_LIB} ${EXT_LIB} ${3RDPARTY_LIB})





