cmake_minimum_required(VERSION 2.6)
project(module_audio_conference_mixer)

include_directories(${CMAKE_SOURCE_DIR})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
file(GLOB lib_src ./source/*.cc)

add_library(module_audio_conference_mixer STATIC ${lib_src})
