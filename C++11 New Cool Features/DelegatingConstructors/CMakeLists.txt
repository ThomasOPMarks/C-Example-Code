cmake_minimum_required(VERSION 2.6)
project(delegatingconstructors)

add_executable(delegatingconstructors main.cpp)
add_definitions(-std=c++11)

install(TARGETS delegatingconstructors RUNTIME DESTINATION bin)
