cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 11)

include(CheckCXXCompilerFlag)

check_cxx_compiler_flag(-fno-sanitize=address HAVE_FLAG_SANITIZE_ADDRESS)

if (HAVE_FLAG_SANITIZE_ADDRESS)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
endif (HAVE_FLAG_SANITIZE_ADDRESS)

add_executable(algebra_test test.cpp)

target_link_libraries(algebra_test PRIVATE linear-algebra)
