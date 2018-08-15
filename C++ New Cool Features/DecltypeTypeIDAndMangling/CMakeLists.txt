cmake_minimum_required(VERSION 2.6)
project(decltypetypeidandmangling)

add_executable(decltypetypeidandmangling main.cpp)
add_definitions(-std=c++11)
install(TARGETS decltypetypeidandmangling RUNTIME DESTINATION bin)
