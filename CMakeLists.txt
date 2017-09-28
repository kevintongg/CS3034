cmake_minimum_required(VERSION 3.8)
project(src/Lab-3)

set(CMAKE_C_STANDARD 11)
#set(CMAKE_CXX_FLAGS "-std=c++14")

set(SOURCE_FILES src/Lab-5/main.c)
#set(SOURCE_FILES src/linked-list-demo/list_demo.c src/linked-list-demo/linked_list.c)
add_executable(CS3034 ${SOURCE_FILES})
include_directories( ${/Users/kevin/Classes/CS3034/Lab-1}/src)
