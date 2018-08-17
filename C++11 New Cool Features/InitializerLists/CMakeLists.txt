cmake_minimum_required(VERSION 2.6)
project(initializerlists)

add_executable(initializerlists main.cpp)
add_definitions(-std=c++11)
install(TARGETS initializerlists RUNTIME DESTINATION bin)
