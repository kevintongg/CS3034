cmake_minimum_required(VERSION 3.8)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES src/lab-8/familytreedriver.cpp src/lab-8/familytree.cpp src/lab-8/familytree.h src/lab-8/person.cpp src/lab-8/person.h src/lab-8/parent.cpp src/lab-8/parent.h src/lab-8/child.cpp src/lab-8/child.h src/lab-8/familytreenode.h)


add_executable(CS3034 ${SOURCE_FILES})