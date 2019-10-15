cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 11)

include(CheckCXXCompilerFlag)

check_cxx_compiler_flag(-fno-sanitize=address HAVE_FLAG_SANITIZE_ADDRESS)

if (HAVE_FLAG_SANITIZE_ADDRESS)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
endif (HAVE_FLAG_SANITIZE_ADDRESS)

add_executable(test_linear_algebra_mat matrix.cpp)
target_link_libraries(test_linear_algebra_mat PRIVATE linear-algebra)

add_executable(test_linear_algebra_vec vector.cpp)
target_link_libraries(test_linear_algebra_vec PRIVATE linear-algebra)
