cmake_minimum_required(VERSION 3.22)
project(
  sumlib
  VERSION 0.1.0.0
  DESCRIPTION "A simple sum function"
  LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_POSITION_INDEPENDENT_CODE on)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
