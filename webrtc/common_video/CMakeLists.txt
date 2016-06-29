cmake_minimum_required(VERSION 2.6)
project(common_video)



include_directories(${CMAKE_SOURCE_DIR}/third_party/libyuv/include)
include_directories(${CMAKE_SOURCE_DIR})
file(GLOB src_file ./*.cc ./libyuv/*.cc ./h264/*.cc)

add_library(common_video STATIC ${src_file})
