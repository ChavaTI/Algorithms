cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_POSITION_INDEPENDENT_CODE on)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)

set(test1 Test1Tester)
set(test1src Sum-test.cpp)


add_executable(${test1} ${test1src})

find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})

target_link_libraries(${test1} LINK_PUBLIC ${GTEST_LIBRARY} ${CMAKE_PROJECT_NAME})

enable_testing()
add_test(
  NAME ${test1}
  COMMAND ${test1}
)
