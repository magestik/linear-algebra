set(CTEST_SOURCE_DIRECTORY "$ENV{TRAVIS_BUILD_DIR}")
set(CTEST_BINARY_DIRECTORY "${CTEST_SOURCE_DIRECTORY}/build")

set(CTEST_SITE "travis-ci.com")
set(CTEST_BUILD_NAME "$ENV{TRAVIS_OS_NAME}-$ENV{TRAVIS_COMPILER}-default")

set(CTEST_CMAKE_GENERATOR "Unix Makefiles")
set(CTEST_BUILD_CONFIGURATION "Debug")
#set(CTEST_BUILD_OPTIONS "")

set(WITH_MEMCHECK TRUE)
set(WITH_COVERAGE TRUE)

ctest_start(Continuous)

#ctest_update()

ctest_configure()

ctest_build()

ctest_test()

if (WITH_COVERAGE AND CTEST_COVERAGE_COMMAND)
  ctest_coverage()
endif (WITH_COVERAGE AND CTEST_COVERAGE_COMMAND)

if (WITH_MEMCHECK AND CTEST_MEMORYCHECK_COMMAND)
  ctest_memcheck()
endif (WITH_MEMCHECK AND CTEST_MEMORYCHECK_COMMAND)

ctest_submit()
