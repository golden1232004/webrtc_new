cmake_minimum_required(VERSION 2.6)
project(module_audio_coding)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/webrtc/modules/audio_coding/codecs/isac/main/include)
include_directories(${CMAKE_SOURCE_DIR}/webrtc/common_audio/signal_processing/include/)
#include_directories(${CMAKE_SOURCE_DIR}/chromium/src/third_party/opus/src/celt)
#include_directories(${CMAKE_SOURCE_DIR}/chromium/src/third_party/opus/src/src)
#include_directories(${CMAKE_SOURCE_DIR}/chromium/src/third_party/opus/src/include)
include_directories(${CMAKE_SOURCE_DIR}/third_party/opus/celt)
include_directories(${CMAKE_SOURCE_DIR}/third_party/opus/src)
include_directories(${CMAKE_SOURCE_DIR}/third_party/opus/include)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
file(GLOB lib_src ./acm2/*.cc ./codecs/*.cc ./codecs/isac/*.cc ./codecs/isac/main/source/*.c ./codecs/isac/main/source/*.cc ./codecs/isac/main/util/*.c ./codecs/isac/fix/source/*.cc ./codecs/isac/fix/source/*.c ./codecs/g711/*.cc ./codecs/g711/*.c ./codecs/cng/*.cc ./codecs/pcm16b/*.cc ./codecs/pcm16b/*.c ./neteq/*.cc )

add_library(module_audio_coding STATIC ${lib_src})
