cmake_minimum_required(VERSION 3.9)

project(mylib VERSION 1.0.1 DESCRIPTION "sandbox library")

add_library(mylib STATIC
    ../src/planck.cpp
)

set_target_properties(mylib PROPERTIES VERSION ${PROJECT_VERSION})

set_target_properties(mylib PROPERTIES PUBLIC_HEADER src/planck.h)

target_include_directories(mylib PRIVATE src)

install(TARGETS mylib
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
