set(CTEST_SOURCE_DIRECTORY "$ENV{GITHUB_WORKSPACE}")
set(CTEST_BINARY_DIRECTORY "${CTEST_SOURCE_DIRECTORY}/build")

set(CTEST_SITE "github.com")

set(CTEST_BUILD_OPTIONS "")

if (NOT DEFINED ANDROID)
	set(ANDROID 0)
endif()

if (NOT DEFINED IOS)
	set(IOS 0)
endif()

if (CMAKE_HOST_SYSTEM_NAME STREQUAL "Linux")

	if (ANDROID)
		set(CTEST_BUILD_NAME "android-gcc-default")
		set(CTEST_BUILD_OPTIONS "-DCMAKE_SYSTEM_NAME=Android -DCMAKE_SYSTEM_VERSION=21 -DCMAKE_ANDROID_ARCH_ABI=arm64-v8a -DCMAKE_ANDROID_STL_TYPE=system")
	else()
		set(CXX "$ENV{CXX}")
		if (CXX STREQUAL "g++")
			set(CTEST_BUILD_NAME "linux-gcc-default")
		elseif (CXX STREQUAL "clang++")
			set(CTEST_BUILD_NAME "linux-gcc-default")
		endif()
	endif()

	set(CTEST_CMAKE_GENERATOR "Unix Makefiles")

elseif (CMAKE_HOST_SYSTEM_NAME STREQUAL "Darwin")

	if (IOS)
		set(CTEST_BUILD_NAME "ios-xcode-ide")
		set(CTEST_BUILD_OPTIONS "-DCMAKE_SYSTEM_NAME=iOS -DCMAKE_OSX_ARCHITECTURES=armv7;armv7s;arm64;i386;x86_64")
	else()
		set(CTEST_BUILD_NAME "osx-xcode-ide")
	endif()

	set(CTEST_CMAKE_GENERATOR "Xcode")

elseif (CMAKE_HOST_SYSTEM_NAME STREQUAL "Windows")

	set(CTEST_BUILD_NAME "windows-vs16-ide")
	set(CTEST_CMAKE_GENERATOR "Visual Studio 16 2019")

endif()

set(CTEST_BUILD_CONFIGURATION "Debug")

set(WITH_MEMCHECK TRUE)
set(WITH_COVERAGE FALSE)

find_program(CTEST_GIT_COMMAND NAMES git git.cmd)
find_program(CTEST_COVERAGE_COMMAND NAMES gcov)
find_program(CTEST_MEMORYCHECK_COMMAND NAMES valgrind)

set(CTEST_UPDATE_COMMAND "${CTEST_GIT_COMMAND}")

include(${CTEST_SCRIPT_DIRECTORY}/common.cmake)
