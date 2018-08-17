cmake_minimum_required(VERSION 2.6)
project(elisionandoptimization)

add_executable(elisionandoptimization main.cpp)
add_definitions(-std=c++11)
install(TARGETS elisionandoptimization RUNTIME DESTINATION bin)
