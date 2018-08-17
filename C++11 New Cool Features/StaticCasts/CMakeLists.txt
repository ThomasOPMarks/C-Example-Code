cmake_minimum_required(VERSION 2.6)
project(staticcasts)

add_executable(staticcasts main.cpp)
add_definitions(-std=c++11)

install(TARGETS staticcasts RUNTIME DESTINATION bin)
