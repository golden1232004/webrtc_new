cmake_minimum_required(VERSION 2.6)
project(webrtc)

include_directories(${CMAKE_SOURCE_DIR})

file(GLOB src_file ./*.cc)

add_library(webrtc STATIC ${src_file})


add_subdirectory(api)
add_subdirectory(base)

add_subdirectory(p2p)
add_subdirectory(media)
add_subdirectory(audio)
add_subdirectory(pc)
add_subdirectory(common_video)
add_subdirectory(system_wrappers)
add_subdirectory(voice_engine)
add_subdirectory(modules)
add_subdirectory(call)

#add_subdirectory(./sound)
#add_subdirectory(./libjingle)
#add_subdirectory(./video)

