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
endif ()

include_directories(${CMAKE_SOURCE_DIR})
include_directories(./include)
file(GLOB src_file ./src/*.cc)

add_library(peerconnection_client STATIC ${src_file})

set(EXT_LIB pthread ssl crypto dl ss3 rt)
set(3RDPARTY_LIB yuv)
add_executable(peerconnection_client_example test/webrtc_streamer.cc)
target_link_libraries(peerconnection_client_example peerconnection_clent base ${EXT_LIB} ${3RDPARTY_LIB})




