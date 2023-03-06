cmake_minimum_required(VERSION 3.24)
project(ute CXX)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SOURCES src/*.cpp)
file(GLOB_RECURSE HEADERS headers/*.h)


add_executable(ute ${SOURCES} ${HEADERS} headers/terminalFrame.h)

target_include_directories(ute PUBLIC headers)
