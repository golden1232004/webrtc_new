cmake_minimum_required(VERSION 2.6)
project(base)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/webrtc)

file(GLOB lib_src *.cc)

add_library(base STATIC ${lib_src})
