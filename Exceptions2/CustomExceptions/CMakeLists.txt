cmake_minimum_required(VERSION 2.6)
project(customexceptions)

add_executable(customexceptions main.cpp)

install(TARGETS customexceptions RUNTIME DESTINATION bin)
