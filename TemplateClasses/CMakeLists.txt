cmake_minimum_required(VERSION 2.6)
project(templateclasses)

add_executable(templateclasses main.cpp)
add_definitions(-std=c++11)
install(TARGETS templateclasses RUNTIME DESTINATION bin)
