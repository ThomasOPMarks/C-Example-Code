cmake_minimum_required(VERSION 2.6)
project(objectslicingandpolymorphism)

add_executable(objectslicingandpolymorphism main.cpp)
add_definitions(-std=c++11)
install(TARGETS objectslicingandpolymorphism RUNTIME DESTINATION bin)
