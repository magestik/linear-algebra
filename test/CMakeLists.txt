cmake_minimum_required(VERSION 3.10)

include(CheckCXXCompilerFlag)

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

    check_cxx_compiler_flag(-fkeep-inline-functions HAVE_KEEP_INLINE_FUNCTIONS)
    if (HAVE_KEEP_INLINE_FUNCTIONS)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fkeep-inline-functions")
    endif(HAVE_KEEP_INLINE_FUNCTIONS)

    check_cxx_compiler_flag(-fkeep-static-functions HAVE_KEEP_STATIC_FUNCTIONS)
    if (HAVE_KEEP_STATIC_FUNCTIONS)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fkeep-static-functions")
    endif(HAVE_KEEP_STATIC_FUNCTIONS)

endif()

find_package(GTest REQUIRED)

add_executable(test_linear_algebra_mat matrix.cpp)
target_link_libraries(test_linear_algebra_mat PRIVATE linear-algebra)
target_link_libraries(test_linear_algebra_mat PRIVATE GTest::GTest GTest::Main)
gtest_discover_tests(test_linear_algebra_mat)

add_executable(test_linear_algebra_vec vector.cpp)
target_link_libraries(test_linear_algebra_vec PRIVATE linear-algebra)
target_link_libraries(test_linear_algebra_vec PRIVATE GTest::GTest GTest::Main)
gtest_discover_tests(test_linear_algebra_mat)

add_executable(test_linear_algebra_float float.cpp)
target_link_libraries(test_linear_algebra_float PRIVATE linear-algebra)
target_link_libraries(test_linear_algebra_float PRIVATE GTest::GTest GTest::Main)
gtest_discover_tests(test_linear_algebra_mat)
