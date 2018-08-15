cmake_minimum_required(VERSION 2.6)
project(overloadingplus)

add_executable(overloadingplus main.cpp Complex.h Complex.cpp)

add_definitions(-std=c++11)
install(TARGETS overloadingplus RUNTIME DESTINATION bin)
