cmake_minimum_required(VERSION 2.6)
project(standardexceptions)

add_executable(standardexceptions main.cpp)

install(TARGETS standardexceptions RUNTIME DESTINATION bin)
