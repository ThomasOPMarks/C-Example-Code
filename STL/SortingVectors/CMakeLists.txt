cmake_minimum_required(VERSION 2.6)
project(sortingvectors)

add_executable(sortingvectors main.cpp)
add_definitions(-std=c++0x)
install(TARGETS sortingvectors RUNTIME DESTINATION bin)
