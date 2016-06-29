cmake_minimum_required(VERSION 2.6)
project(media)

include_directories(${CMAKE_SOURCE_DIR}/third_party/libyuv/include)
include_directories(${CMAKE_SOURCE_DIR})
file(GLOB src_file ./base/*.cc ./devices/*.cc ./engine/*.cc ./sctp/*.cc)

add_library(media STATIC ${src_file})
