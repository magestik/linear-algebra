set(CTEST_SOURCE_DIRECTORY "$ENV{APPVEYOR_BUILD_FOLDER}")
set(CTEST_BINARY_DIRECTORY "${CTEST_SOURCE_DIRECTORY}/build")

set(CTEST_SITE "ci.appveyor.com")

set(APPVEYOR_BUILD_WORKER_IMAGE "$ENV{APPVEYOR_BUILD_WORKER_IMAGE}")

if (APPVEYOR_BUILD_WORKER_IMAGE STREQUAL "Visual Studio 2015")
	set(CTEST_CMAKE_GENERATOR "Visual Studio 14 2015")
	set(CTEST_BUILD_NAME "windows-vs14-ide")
elseif (APPVEYOR_BUILD_WORKER_IMAGE STREQUAL "Visual Studio 2017")
	set(CTEST_CMAKE_GENERATOR "Visual Studio 15 2017")
	set(CTEST_BUILD_NAME "windows-vs15-ide")
elseif (APPVEYOR_BUILD_WORKER_IMAGE STREQUAL "Visual Studio 2019")
	set(CTEST_CMAKE_GENERATOR "Visual Studio 16 2019")
	set(CTEST_BUILD_NAME "windows-vs16-ide")
endif()

set(CTEST_BUILD_OPTIONS "")

set(CTEST_BUILD_CONFIGURATION "Debug")

set(WITH_MEMCHECK FALSE)
set(WITH_COVERAGE FALSE)

find_program(CTEST_GIT_COMMAND NAMES git)

set(CTEST_UPDATE_COMMAND "${CTEST_GIT_COMMAND}")

include(${CTEST_SCRIPT_DIRECTORY}/common.cmake)
