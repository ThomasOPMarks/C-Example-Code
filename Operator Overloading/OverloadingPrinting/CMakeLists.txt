cmake_minimum_required(VERSION 2.6)
project(overloadingprinting)

add_executable(overloadingprinting main.cpp)
add_definitions("-std=c++11")
install(TARGETS overloadingprinting RUNTIME DESTINATION bin)
