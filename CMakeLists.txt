cmake_minimum_required(VERSION 3.1)

project(linear-algebra)

enable_testing()

add_library(linear-algebra INTERFACE)

target_include_directories(linear-algebra INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/include")

add_subdirectory(test)
