cmake_minimum_required(VERSION 2.6)
project(p2p)

#include_directories(./base)
#include_directories(./client)
#include_directories(./stunprober)
include_directories(${CMAKE_SOURCE_DIR})

#file(GLOB lib_src ./base/*.cc ./client/*.cc ./quic/*.cc ./stunprober/*.cc)
file(GLOB lib_src ./base/*.cc ./client/*.cc  ./stunprober/*.cc)

add_library(p2p STATIC ${lib_src})

