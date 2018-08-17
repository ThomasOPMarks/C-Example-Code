cmake_minimum_required(VERSION 2.6)
project(initializationin11)

add_executable(initializationin11 main.cpp)
add_definitions(-std=c++11)
install(TARGETS initializationin11 RUNTIME DESTINATION bin)
