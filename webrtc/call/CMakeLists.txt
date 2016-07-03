cmake_minimum_required(VERSION 2.6)
project(module_call)


include_directories(${CMAKE_SOURCE_DIR})

file(GLOB src_file ./*.cc)
add_library(module_call STATIC ${src_file})