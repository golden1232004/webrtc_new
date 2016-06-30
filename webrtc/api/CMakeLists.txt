cmake_minimum_required(VERSION 2.6)
project(api)

if (CMAKE_SYSTEM_NAME STREQUAL "Darwin")
  #include_directories(/usr/local/Cellar/openssl/1.0.2h_1/include)
endif ()

include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/chromium/src)

file(GLOB lib_src *.cc)

add_library(api STATIC ${lib_src})
