cmake_minimum_required(VERSION 2.6)
project(lists)

add_executable(lists main.cpp)

install(TARGETS lists RUNTIME DESTINATION bin)
