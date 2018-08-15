cmake_minimum_required(VERSION 2.8)
project (Threading CXX)
include_directories (${CMAKE_CURRENT_SOURCE_DIR}/include ) 
file (GLOB Sources
	${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)	
file (GLOB Headers
	${CMAKE_CURRENT_SOURCE_DIR}/include/*.h
)
message($Headers)
message($Sources)
add_executable (output ${Headers} ${Sources})
# Project source directory


#set (GCC_COMPILE_FLAGS "-g -O3 -pthread -std=c++11")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COMPILE_FLAGS}")

