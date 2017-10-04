cmake_minimum_required(VERSION 3.8)
project(src/Lab-3)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES src/lab-5/main.c src/lab-5/monster_attack.h src/lab-5/student.h src/lab-5/student.c src/lab-5/monster_attack.c src/Lab-5/clean.h src/Lab-5/clean.c)
#set(SOURCE_FILES src/test/test.c)

add_executable(CS3034 ${SOURCE_FILES})