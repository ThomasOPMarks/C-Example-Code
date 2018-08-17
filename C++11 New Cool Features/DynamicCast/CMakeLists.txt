cmake_minimum_required(VERSION 2.6)
project(dynamiccast)

add_executable(dynamiccast main.cpp)
add_definitions(-std=c++11)
install(TARGETS dynamiccast RUNTIME DESTINATION bin)
