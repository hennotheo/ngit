cmake_minimum_required(VERSION 3.10)

project(NGit C)

set(CMAKE_C_STANDARD 99)

include_directories(include)

file(GLOB_RECURSE SOURCES "src/*.c")
add_executable(NGit main.c ${SOURCES})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/bin/release")

install(TARGETS NGit RUNTIME DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE})