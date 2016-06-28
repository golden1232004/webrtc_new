cmake_minimum_required(VERSION 2.6)
project(p2pvideo)

if (CMAKE_SYSTEM_NAME MATCHES "Darwin")
  include_directories(/usr/local/Cellar/openssl/1.0.2h_1/include)
endif ()

include_directories(${CMAKE_SOURCE_DIR})
include_directories(./include)
file(GLOB p2pvideo_src ./src/*.cc)

add_library(p2pvideo STATIC ${p2pvideo_src})

set(EXT_LIB pthread ssl crypto dl ss3 rt)
set(3RDPARTY_LIB yuv)
add_executable(p2pvideo_example webrtc_streamer.cc)
target_link_libraries(p2pvideo_example p2pvideo base ${EXT_LIB} ${3RDPARTY_LIB})




