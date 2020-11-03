cmake_minimum_required(VERSION 3.17)
project(Rule_of_Five)

set(CMAKE_CXX_STANDARD 17)

add_executable(Rule_of_Five src/main.cpp include/Movable.h src/Movable.cpp)