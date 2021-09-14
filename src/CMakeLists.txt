add_library(mylib STATIC
    planck.cpp
	planck.h
)

set_target_properties(mylib PROPERTIES VERSION ${PROJECT_VERSION})

set_target_properties(mylib PROPERTIES PUBLIC_HEADER planck.h)

target_include_directories(mylib PRIVATE src)

install(TARGETS mylib
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
