cmake_minimum_required(VERSION 3.15)
project(queues)

set(CMAKE_CXX_STANDARD 14)

add_executable(queues main.cpp queues_with_array.cpp queues_with_array.h queues_with_linkedlist.cpp queues_with_linkedlist.h queue_type.h)