cmake_minimum_required(VERSION 2.6)
project(sharedpointers)

add_executable(sharedpointers main.cpp)

add_definitions("-std=c++11")
install(TARGETS sharedpointers RUNTIME DESTINATION bin)
