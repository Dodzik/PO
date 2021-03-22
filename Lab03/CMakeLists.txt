cmake_minimum_required (VERSION 2.6)

project (Lab03)

include_directories(include src)
add_executable(Lab03 main.cpp)

set(LIBSRC include/ReverseText.h src/ReverseText.cpp)

add_library(lab03 ${LIBSRC})
set_target_properties(lab03 PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries(Lab03 lab03)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}-DLIB_TEST -Wall")