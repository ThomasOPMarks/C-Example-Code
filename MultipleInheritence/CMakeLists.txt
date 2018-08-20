cmake_minimum_required(VERSION 2.6)
project(multipleinheritence)

add_executable(multipleinheritence main.cpp)
add_definitions("-std=c++11")
install(TARGETS multipleinheritence RUNTIME DESTINATION bin)
