cmake_minimum_required(VERSION 2.6)
project(objectinitializationdefaultanddelete)

add_executable(objectinitializationdefaultanddelete main.cpp)
add_definitions(-std=c++11)
install(TARGETS objectinitializationdefaultanddelete RUNTIME DESTINATION bin)
