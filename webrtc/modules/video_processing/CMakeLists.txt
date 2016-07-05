cmake_minimum_required(VERSION 2.6)
project(module_video_processing)

include_directories(${CMAKE_SOURCE_DIR})

file(GLOB src_file ./*.cc ./util/*.cc)

add_library(module_video_processing STATIC ${src_file})