set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_POSITION_INDEPENDENT_CODE on)

set(LIB_BINARY ${CMAKE_PROJECT_NAME})

set(headers Sum.h)
set(sources Sum.h)

set(SOURCES ${headers} ${sources})

add_library(${LIB_BINARY} STATIC ${SOURCES})
set_target_properties( ${LIB_BINARY} PROPERTIES LINKER_LANGUAGE CXX )
target_include_directories( ${LIB_BINARY} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
