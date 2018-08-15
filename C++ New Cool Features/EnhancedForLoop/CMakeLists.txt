cmake_minimum_required(VERSION 2.6)
project(enhancedforloop)

add_executable(enhancedforloop main.cpp)
add_definitions(-std=c++11)
install(TARGETS enhancedforloop RUNTIME DESTINATION bin)
