cmake_minimum_required (VERSION 2.6)

project (Lab4)

include_directories(include src)
add_executable(Lab4 main.cpp)

set(LIBSRC include/Funkcje.h include/ZlozenieFunkcji.h src/Funkcje.cpp src/ZlozenieFunkcji.cpp)

add_library(lab4 ${LIBSRC})
set_target_properties(lab4 PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries(Lab4 lab4)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}-DLIB_TEST -Wall")