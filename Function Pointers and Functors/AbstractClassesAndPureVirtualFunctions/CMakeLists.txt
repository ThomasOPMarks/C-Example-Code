cmake_minimum_required(VERSION 2.6)
project(abstractclassesandpurevirtualfunctions)

add_executable(abstractclassesandpurevirtualfunctions main.cpp)
add_definitions(-std=c++11)
install(TARGETS abstractclassesandpurevirtualfunctions RUNTIME DESTINATION bin)
