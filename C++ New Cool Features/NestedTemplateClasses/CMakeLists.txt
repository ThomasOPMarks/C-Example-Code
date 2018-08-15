cmake_minimum_required(VERSION 2.6)
project(nestedtemplateclasses)

add_executable(nestedtemplateclasses main.cpp ring.h)
add_definitions(-std=c++11)
install(TARGETS nestedtemplateclasses RUNTIME DESTINATION bin)
