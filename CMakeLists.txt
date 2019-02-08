cmake_minimum_required(VERSION 3.0)

project(myapp)
enable_language(CXX)

add_executable(helloworld src/helloworld.cpp)
add_library(square src/lib/*)
