cmake_minimum_required(VERSION 2.6)
project(video)

include_directories(${CMAKE_SOURCE_DIR})

file(GLOB src_file ./*.cc)

add_library(video STATIC ${src_file})
