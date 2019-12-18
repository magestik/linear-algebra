set(CTEST_SOURCE_DIRECTORY "$ENV{GITHUB_WORKSPACE}")
set(CTEST_BINARY_DIRECTORY "${CTEST_SOURCE_DIRECTORY}/build")

set(CTEST_SITE "github.com")

if (GITHUB_RUNNER_OS STREQUAL "Linux")

	set(CXX "$ENV{CXX}")
	if (CXX STREQUAL "g++")
		set(CTEST_BUILD_NAME "linux-gcc-default")
	elseif (CXX STREQUAL "clang++")
		set(CTEST_BUILD_NAME "linux-gcc-default")
	endif()

	set(CTEST_CMAKE_GENERATOR "Unix Makefiles")

elseif (GITHUB_RUNNER_OS STREQUAL "macOS")

	set(CTEST_BUILD_NAME "osx-xcode-ide")
	set(CTEST_CMAKE_GENERATOR "Xcode")

elseif (GITHUB_RUNNER_OS STREQUAL "Windows")

	set(CTEST_BUILD_NAME "windows-vs16-ide")
	set(CTEST_CMAKE_GENERATOR "Visual Studio 16 2019")

endif()

set(CTEST_BUILD_CONFIGURATION "Debug")

set(WITH_MEMCHECK TRUE)
set(CTEST_BUILD_OPTIONS "")
set(WITH_COVERAGE FALSE)

find_program(CTEST_GIT_COMMAND NAMES git)
find_program(CTEST_COVERAGE_COMMAND NAMES gcov)
find_program(CTEST_MEMORYCHECK_COMMAND NAMES valgrind)

set(CTEST_UPDATE_COMMAND "${CTEST_GIT_COMMAND}")

include(${CTEST_SCRIPT_DIRECTORY}/common.cmake)
