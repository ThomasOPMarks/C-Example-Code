cmake_minimum_required(VERSION 2.6)
project(complexnumberclass)

add_executable(complexnumberclass Complex.h main.cpp Complex.cpp )
add_definitions("-std=c++11")
install(TARGETS complexnumberclass RUNTIME DESTINATION bin)
