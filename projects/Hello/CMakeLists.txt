cmake_minimum_required(VERSION 3.14)

project(Hello)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES src/hello.cpp)

add_executable(Hello ${SOURCE_FILES})
