cmake_minimum_required(VERSION 3.30)
project(aoc2024)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(ortools REQUIRED)

add_compile_options(
    -g
    -Wall # Enable all warnings
    -Wextra # Enable extra warnings
    #-Werror # Treat warnings as errors
    -Wno-unused-variable
    -Wno-unused-but-set-variable
    -Wshadow # Warn if a variable declaration shadows one from a parent context
    -Wformat=2 # Perform additional format string checks
    -Wcast-align # Warn about pointer casts that increase alignment
    -Wconversion # Warn for implicit conversions that may change the value2
  #  -Wsign-conversion # Warn for implicit conversions between signed/unsigned
    -Wno-sign-compare
    -Wno-conversion
    -Wno-shadow
    -Wnull-dereference # Warn if a null dereference is detected
    -Wduplicated-cond # Warn if if / else chain has duplicated conditions
    -Wduplicated-branches # Warn if if / else branches have duplicated code
    -Wlogical-op # Warn about logical operations being used where bitwise were probably wanted
    -Wuseless-cast # Warn if you perform a cast to the same type
)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_options(
        -O0
        -fno-omit-frame-pointer
    )
elseif (CMAKE_BUILD_TYPE STREQUAL "Release")
    message(STATUS "Building in release mode")
    add_compile_options(
        -Ofast
        -march=native
    )
endif()

add_executable(aoc2024 main.cpp
        days/Day1.cpp
        days/Day1.h
        lib.h
        days/Day2.cpp
        days/Day2.h
        days/Day3.cpp
        days/Day3.h
        days/Day4.cpp
        days/Day4.h
        days/Day5.cpp
        days/Day5.h
        days/Day6.cpp
        days/Day6.h
        days/Day7.cpp
        days/Day7.h
        days/Day8.cpp
        days/Day8.h
        days/Day9.cpp
        days/Day9.h
        days/Day10.cpp
        days/Day10.h
        days/Day11.cpp
        days/Day11.h
        days/Day12.cpp
        days/Day12.h
        days/Day13.cpp
        days/Day13.h
        days/Day14.cpp
        days/Day14.h
        days/Day15.cpp
        days/Day15.h
        days/Day16.cpp
        days/Day16.h
        days/Day17.cpp
        days/Day17.h
        days/Day18.cpp
        days/Day18.h
        days/Day19.cpp
        days/Day19.h
        days/Day20.cpp
        days/Day20.h
        days/Day21.cpp
        days/Day21.h
        days/Day22.cpp
        days/Day22.h
        days/Day23.cpp
        days/Day23.h
        days/Day24.cpp
        days/Day24.h
        days/Day25.cpp
        days/Day25.h
        )

target_link_libraries(aoc2024 PRIVATE ortools::ortools)
