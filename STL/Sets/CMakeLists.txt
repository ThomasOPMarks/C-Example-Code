cmake_minimum_required(VERSION 2.6)
project(sets)

add_executable(sets main.cpp)
add_definitions(-std=c++0x)
install(TARGETS sets RUNTIME DESTINATION bin)
