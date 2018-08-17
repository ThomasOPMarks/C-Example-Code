cmake_minimum_required(VERSION 2.6)
project(lambdaexpressions)

add_executable(lambdaexpressions main.cpp)
add_definitions(-std=c++11)
install(TARGETS lambdaexpressions RUNTIME DESTINATION bin)
