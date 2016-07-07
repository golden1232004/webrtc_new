cmake_minimum_required(VERSION 2.6)
project(module_audio_processing)

include_directories(${CMAKE_SOURCE_DIR})

file(GLOB src_file ./*.cc ./aec/*.cc ./agc/*.cc ./agc/legacy/*.c ./beamformer/*.cc ./intelligibility/*.cc ./transient/*.cc ./vad/*.cc ./ns/*.c ./aecm/*.cc ./utility/*.cc)

add_library(module_audio_processing STATIC ${src_file})