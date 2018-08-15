cmake_minimum_required(VERSION 2.6)
project(functionpointers)

add_executable(functionpointers main.cpp)
add_definitions(-std=c++0x)
install(TARGETS functionpointers RUNTIME DESTINATION bin)
