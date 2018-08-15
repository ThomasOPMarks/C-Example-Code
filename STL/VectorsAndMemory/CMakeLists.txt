cmake_minimum_required(VERSION 2.6)
project(vectorsandmemory)

add_executable(vectorsandmemory main.cpp)

install(TARGETS vectorsandmemory RUNTIME DESTINATION bin)
