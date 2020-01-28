cmake_minimum_required(VERSION 3.15)
project(linkedList)

set(CMAKE_CXX_STANDARD 14)

add_executable(linkedList main.cpp unorderedLinkedList.cpp unorderedLinkedList.h orderedLinkedList.cpp orderedLinkedList.h doublyLinkedList.cpp doublyLinkedList.h)