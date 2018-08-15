cmake_minimum_required(VERSION 2.6)
project(auto)

add_executable(auto main.cpp)
add_definitions(-std=c++11)
install(TARGETS auto RUNTIME DESTINATION bin)
