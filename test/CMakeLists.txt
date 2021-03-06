cmake_minimum_required(VERSION 3.10...3.14)

if (MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W3 /WX")
    if(MSVC_VERSION GREATER 1900)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /permissive-")
    endif()
else (MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")
endif (MSVC)

option(WITH_COVERAGE OFF)

if (WITH_COVERAGE)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
endif()

if (NOT TARGET GTest::GTest OR NOT TARGET GTest::Main)
    find_package(GTest REQUIRED)
endif()

add_executable(test_linear_algebra_matrix mat2x2.cpp mat3x3.cpp mat4x4.cpp)
target_link_libraries(test_linear_algebra_matrix PRIVATE linear-algebra)
target_link_libraries(test_linear_algebra_matrix PRIVATE GTest::GTest GTest::Main)
gtest_discover_tests(test_linear_algebra_matrix)

add_executable(test_linear_algebra_vector vec2.cpp vec3.cpp vec4.cpp helpers.h)
target_link_libraries(test_linear_algebra_vector PRIVATE linear-algebra)
target_link_libraries(test_linear_algebra_vector PRIVATE GTest::GTest GTest::Main)
gtest_discover_tests(test_linear_algebra_vector)

add_executable(test_linear_algebra_float float.cpp)
target_link_libraries(test_linear_algebra_float PRIVATE linear-algebra)
target_link_libraries(test_linear_algebra_float PRIVATE GTest::GTest GTest::Main)
gtest_discover_tests(test_linear_algebra_float)
