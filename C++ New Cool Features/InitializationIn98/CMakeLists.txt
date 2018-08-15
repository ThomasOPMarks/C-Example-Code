cmake_minimum_required(VERSION 2.6)
project(initializationin98)

add_executable(initializationin98 main.cpp)
add_definitions(-std=c++11)
install(TARGETS initializationin98 RUNTIME DESTINATION bin)
