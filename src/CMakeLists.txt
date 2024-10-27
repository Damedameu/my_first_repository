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
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/static_lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_INSTALL_PREFIX ../release)

set(CMAKE_INSTALL_RPATH ${CMAKE_INSTALL_PREFIX}/bin)
set(CMAKE_BUILD_RPATH ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
# message(${CMAKE_BUILD_WITH_INSTALL_RPATH})
message(${CMAKE_BUILD_RPATH})
MESSAGE(${CMAKE_INSTALL_RPATH})

# message(===${CMAKE_BINARY_DIR})

add_subdirectory(include)

add_executable(test test.cpp)

target_include_directories(test PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(test PUBLIC addition min PRIVATE show)
# message(===${CMAKE_SOURCE_DIR})

install(TARGETS test DESTINATION bin)
