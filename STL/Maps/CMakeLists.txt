cmake_minimum_required(VERSION 2.6)
project(maps)

add_executable(maps main.cpp)

install(TARGETS maps RUNTIME DESTINATION bin)
