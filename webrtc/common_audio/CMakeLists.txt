cmake_minimum_required(VERSION 2.6)
project(common_audio)



include_directories(${CMAKE_SOURCE_DIR})
file(GLOB src_file ./*.cc ./vad/*.cc ./resampler/*.cc ./signal_processing/*.c)

add_library(common_audio STATIC ${src_file})
