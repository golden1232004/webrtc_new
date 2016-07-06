cmake_minimum_required(VERSION 2.6)
project(module_remote_bitrate_estimator)

include_directories(${CMAKE_SOURCE_DIR})
file(GLOB src_file ./*.cc)

add_library(module_remote_bitrate_estimator STATIC ${src_file})
