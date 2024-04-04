cmake_minimum_required(VERSION 3.27)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        dynamic_array.cpp
        dynamic_array.h
        linked_list.cpp
        linked_list.h
)
