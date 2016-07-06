cmake_minimum_required(VERSION 2.6)
project(module_bitrate_controller)

include_directories(${CMAKE_SOURCE_DIR})
file(GLOB src_file ./*.cc)

add_library(module_bitrate_controller STATIC ${src_file})
