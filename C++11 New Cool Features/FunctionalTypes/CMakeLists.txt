cmake_minimum_required(VERSION 2.6)
project(functionaltypes)

add_executable(functionaltypes main.cpp)
add_definitions(-std=c++11)

install(TARGETS functionaltypes RUNTIME DESTINATION bin)
