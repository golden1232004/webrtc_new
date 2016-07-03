cmake_minimum_required(VERSION 2.6)
project(audio)


include_directories(${CMAKE_SOURCE_DIR})

file(GLOB src_file ./*.cc)

add_library(audio STATIC ${src_file})