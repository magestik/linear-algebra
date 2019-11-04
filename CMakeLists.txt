cmake_minimum_required(VERSION 3.1)

project(linear-algebra CXX)

enable_testing()

add_library(linear-algebra INTERFACE)

target_include_directories(linear-algebra INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/include")

if (BUILD_TESTING)
    add_subdirectory(test)
endif()
