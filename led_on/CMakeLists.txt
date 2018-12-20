cmake_minimum_required(VERSION 3.11)
project(cxx_led_on VERSION 0.0.1)
enable_language(CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

option(COMPILE_UNIT_TESTS "Compile unit tests" OFF)

if(COMPILE_UNIT_TESTS)
    enable_testing()

    message(STATUS "Fetching googletest")
    include(FetchContent)
    FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.8.1
    )

    FetchContent_GetProperties(googletest)
    if(NOT googletest_POPULATED)
        FetchContent_Populate(googletest)
        add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
    endif()

    add_subdirectory(tests)
endif()

add_subdirectory(src)
