cmake_minimum_required(VERSION 3.8)
project(Distance)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Distance.cpp )
add_executable(Distance ${SOURCE_FILES})