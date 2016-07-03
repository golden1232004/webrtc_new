cmake_minimum_required(VERSION 2.6)
project(module_video_coding)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/third_party/libvpx/source/libvpx)

file(GLOB src_file ./*.cc ./codecs/h264/*.cc ./codecs/vp9/*.cc ./utility/*.cc)

add_library(module_video_coding STATIC ${src_file})