CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

project(test LANGUAGES CXX VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

#[[
a test project of git
this is a cmakelists file
created by jiancl 10/25/2024
]]

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

file(GLOB SOURCES "*.cpp" "*.h")

add_executable(test ${SOURCES})

message("CMAKE COPLETE SUCCESSFULLY\nVERSION 1.0")
