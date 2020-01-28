cmake_minimum_required(VERSION 3.15)
project(stack)

set(CMAKE_CXX_STANDARD 14)

add_executable(stack main.cpp stack_with_array.cpp stack_with_array.h stack_with_linkedlist.cpp stack_with_linkedlist.h stack_type.h)