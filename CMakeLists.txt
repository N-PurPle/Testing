

cmake_minimum_required(VERSION 2.8)

project(testing)

if(${TESTING_BUILD_TYPE} STREQUAL "COVERAGE")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -coverage")
endif()

set(TESTING_ROOT ${CMAKE_CURRENT_LIST_DIR})

set(
    testing_sources
    source/testing.cpp
)

add_library(
    testing
    ${testing_sources}
)

enable_testing()
add_subdirectory(tests)
