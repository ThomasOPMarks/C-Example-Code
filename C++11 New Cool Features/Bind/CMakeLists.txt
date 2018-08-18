cmake_minimum_required(VERSION 2.6)
project(bind)

add_executable(bind main.cpp)
add_definitions("-std=c++11")
install(TARGETS bind RUNTIME DESTINATION bin)
