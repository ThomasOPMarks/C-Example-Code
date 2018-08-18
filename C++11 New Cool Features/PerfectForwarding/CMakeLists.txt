cmake_minimum_required(VERSION 2.6)
project(perfectforwarding)

add_executable(perfectforwarding main.cpp)
add_definitions("-std=c++11")
install(TARGETS perfectforwarding RUNTIME DESTINATION bin)
