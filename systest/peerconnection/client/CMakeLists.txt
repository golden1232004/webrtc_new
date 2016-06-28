cmake_minimum_required(VERSION 2.6)
project(peerconnection_client)

if (CMAKE_SYSTEM_NAME MATCHES "Darwin")
  include_directories(/usr/local/Cellar/openssl/1.0.2h_1/include)
endif ()

include_directories(${CMAKE_SOURCE_DIR})
include_directories(./include)
file(GLOB src_file ./src/*.cc)

add_library(peerconnection_client STATIC ${src_file})

set(EXT_LIB pthread ssl crypto dl ss3 rt)
set(3RDPARTY_LIB yuv)
add_executable(peerconnection_client_example test/webrtc_streamer.cc)
target_link_libraries(peerconnection_client_example peerconnection_clent base ${EXT_LIB} ${3RDPARTY_LIB})




