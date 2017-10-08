cmake_minimum_required(VERSION 3.8)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES src/lab-6/employee.cpp src/lab-6/employee.h src/lab-6/paycheck.cpp src/lab-6/paycheck.h src/lab-6/payrollsystem.cpp src/lab-6/payrollsystem.h src/lab-6/main.cpp)

add_executable(CS3034 ${SOURCE_FILES})