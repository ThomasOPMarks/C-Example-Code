cmake_minimum_required(VERSION 2.6)
project(multimaps)

add_executable(multimaps main.cpp)
add_definitions(-std=c++0x)

install(TARGETS multimaps RUNTIME DESTINATION bin)
