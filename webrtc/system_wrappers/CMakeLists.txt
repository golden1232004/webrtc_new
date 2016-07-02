cmake_minimum_required(VERSION 2.6)
project(system_wrappers)



include_directories(${CMAKE_SOURCE_DIR})
file(GLOB src_file ./source/*.c ./source/*.cc)

add_library(system_wrappers STATIC ${src_file})