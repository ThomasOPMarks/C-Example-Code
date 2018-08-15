cmake_minimum_required(VERSION 2.6)
project(vector)

add_executable(vector main.cpp)

install(TARGETS vector RUNTIME DESTINATION bin)
