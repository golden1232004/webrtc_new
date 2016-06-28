cmake_minimum_required(VERSION 2.6)
project(base)

if (CMAKE_SYSTEM_NAME STREQUAL "Darwin")
  include_directories(/usr/local/Cellar/openssl/1.0.2h_1/include)
endif ()

include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/webrtc)


file(GLOB lib_src *.cc)

add_library(base STATIC ${lib_src})
