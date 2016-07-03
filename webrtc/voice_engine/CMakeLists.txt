cmake_minimum_required(VERSION 2.6)
project(voice_engine)


include_directories(${CMAKE_SOURCE_DIR})

file(GLOB src_file ./*.cc)

add_library(voice_engine STATIC ${src_file})