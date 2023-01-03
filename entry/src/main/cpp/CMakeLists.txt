# the minimum version of CMake.
cmake_minimum_required(VERSION 3.4.1)
project(aircasHD_ets)

set(NATIVERENDER_ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${NATIVERENDER_ROOT_PATH}
                    ${NATIVERENDER_ROOT_PATH}/include
                    ${NATIVERENDER_ROOT_PATH}/common)

add_library(aircashd SHARED aircashd.cpp socket.cpp)
target_link_libraries(aircashd PUBLIC hilog_ndk.z.so libace_napi.z.so libc++.so)
# target_link_libraries(socket PUBLIC hilog_ndk.z.so libace_napi.z.so libc++.so libpcap libsodium)