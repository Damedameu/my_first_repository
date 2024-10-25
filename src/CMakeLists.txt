CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

project(test LANGUAGES CXX VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

#[[
a test project of git
this is a cmakelists file
created by jiancl 10/25/2024
]]

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_INSTALL_PREFIX,../release)
message(===${CMAKE_BINARY_DIR})

add_subdirectory(./include)

add_executable(test test.cpp)

target_include_directories(test PRIVATE ${CMAKE_SOURCE_DIR}/include)
message(===${CMAKE_SOURCE_DIR})

install(TARGETS test DESTINATION bin)
