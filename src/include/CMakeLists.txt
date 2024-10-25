add_library(addition STATIC add.cpp)

add_library(min SHARED min.cpp)

install(TARGETS addition DESTINATION lib)
install(TARGETS min DESTINATION bin)
