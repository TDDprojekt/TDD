project(chapterFirstExample)
cmake_minimum_required(VERSION 2.6)

include_directories(/home/balu/TDD/gmock-1.6.0/include /home/balu/TDD/gmock-1.6.0/gtest/include)
link_directories(/home/balu/TDD/gmock-1.6.0/mybuild /home/balu/TDD/gmock-1.6.0/gtest/mybuild)
add_definitions(-std=c++11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -pthread")

set(sources 
   main.cpp 
   SoundexTest.cpp
   Soundex.h
   Soundex.cpp)
add_executable(test ${sources})
target_link_libraries(test pthread)
target_link_libraries(test gmock)
target_link_libraries(test gtest)

