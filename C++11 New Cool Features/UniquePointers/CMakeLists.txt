cmake_minimum_required(VERSION 2.6)
project(uniquepointers)

add_executable(uniquepointers main.cpp)
add_definitions("-std=c++11")
install(TARGETS uniquepointers RUNTIME DESTINATION bin)
