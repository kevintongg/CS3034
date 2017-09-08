cmake_minimum_required(VERSION 3.8)
project(src/Lab-2)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES src/Lab-2/lab2.c src/Lab-2/lab2.h src/Lab-2/lab2main.c)
add_executable(CS3034 ${SOURCE_FILES} src/Lab-2/lab2.h)
include_directories( ${/Users/kevin/Classes/CS3034/Lab-1}/src)
