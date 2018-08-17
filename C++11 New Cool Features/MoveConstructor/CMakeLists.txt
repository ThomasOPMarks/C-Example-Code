cmake_minimum_required(VERSION 2.6)
project(moveconstructor)

add_executable(moveconstructor main.cpp)
add_definitions(-std=c++11)
install(TARGETS moveconstructor RUNTIME DESTINATION bin)
