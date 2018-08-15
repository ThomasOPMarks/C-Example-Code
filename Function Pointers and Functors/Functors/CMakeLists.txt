cmake_minimum_required(VERSION 2.6)
project(functors)

add_executable(functors main.cpp)
add_definitions(-std=c++11)
install(TARGETS functors RUNTIME DESTINATION bin)
