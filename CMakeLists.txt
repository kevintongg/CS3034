cmake_minimum_required(VERSION 3.8)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES src/exercise-5/circle.cpp src/exercise-5/circle.h src/exercise-5/main.cpp)

add_executable(CS3034 ${SOURCE_FILES})