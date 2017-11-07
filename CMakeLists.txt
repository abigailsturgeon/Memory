cmake_minimum_required(VERSION 3.8)
project(Memory)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES dynamicMem.cpp)
#set(SOURCE_FILES testStrClass.cpp myString.cpp myString.h)
set(SOURCE_FILES dynamicIntArray.cpp)
add_executable(Memory ${SOURCE_FILES})