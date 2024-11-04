cmake_minimum_required(VERSION 3.29)
project(Quiz_3)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion")

add_executable(Quiz_3 main.cpp)
