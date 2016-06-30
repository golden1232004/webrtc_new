cmake_minimum_required(VERSION 2.6)
project(module_video_capture)

include_directories(${CMAKE_SOURCE_DIR})
#include_directories(${CMAKE_SOURCE_DIR}/chromium/src)
set(src_com *.cc ./external/*.cc)
if (WEBRTC_LINUX)
  file(GLOB lib_src ./linux/*.cc ${src_com})
endif ()

add_library(module_video_capture STATIC ${lib_src})
