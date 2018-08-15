cmake_minimum_required(VERSION 2.6)
project(stackandqueues)

add_executable(stackandqueues main.cpp)
add_definitions(-std=c++0x)
install(TARGETS stackandqueues RUNTIME DESTINATION bin)
