cmake_minimum_required(VERSION 2.6)
project(usingfunctionpointers)

add_executable(usingfunctionpointers main.cpp)
add_definitions(-std=c++0x)
install(TARGETS usingfunctionpointers RUNTIME DESTINATION bin)
