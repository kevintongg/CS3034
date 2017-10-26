cmake_minimum_required(VERSION 3.8)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

#set(SOURCE_FILES src/test/test.cpp)

set(SOURCE_FILES src/lab-7/animal.cpp src/lab-7/animal.h src/lab-7/prey.cpp src/lab-7/prey.h src/lab-7/predator.cpp src/lab-7/predator.h src/lab-7/cat.cpp src/lab-7/cat.h src/lab-7/main.cpp src/lab-7/bird.cpp src/lab-7/bird.h src/lab-7/mouse.cpp src/lab-7/mouse.h)


add_executable(CS3034 ${SOURCE_FILES})