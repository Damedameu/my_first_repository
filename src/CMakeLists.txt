add_subdirectory(./include)

add_executable(test test.cpp)

target_include_directories(test PRIVATE ${CMAKE_SOURCE_DIR}/include)
message(===${CMAKE_SOURCE_DIR})

install(TARGETS test DESTINATION bin)
