cmake_minimum_required(VERSION 2.6)
project(overloadingassignment)

add_executable(overloadingassignment main.cpp)
add_definitions("-std=c++11")
install(TARGETS overloadingassignment RUNTIME DESTINATION bin)
