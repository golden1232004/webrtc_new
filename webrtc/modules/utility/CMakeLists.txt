cmake_minimum_required(VERSION 2.6)
project(module_utility)

include_directories(${CMAKE_SOURCE_DIR})

file(GLOB src_file ./source/*.cc)

add_library(module_utility STATIC ${src_file})
