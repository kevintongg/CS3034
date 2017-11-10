cmake_minimum_required(VERSION 3.8)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES src/test/test.cpp)


add_executable(CS3034 ${SOURCE_FILES})