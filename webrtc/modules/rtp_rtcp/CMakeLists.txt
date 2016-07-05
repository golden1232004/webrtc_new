cmake_minimum_required(VERSION 2.6)
project(rtp_rtcp)

include_directories(${CMAKE_SOURCE_DIR})

file(GLOB src_file ./source/*.cc ./source/rtcp_packet/*.cc)
add_library(rtp_rtcp STATIC ${src_file})
