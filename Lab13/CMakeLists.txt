cmake_minimum_required (VERSION 2.6)
project (Lab13 CXX)

add_executable(Lab13 main.cpp)

set(LIBSRC include/Animal.h include/Animals.h src/Animals.cpp  include/Meadow.h src/Meadow.cpp)
add_library(library ${LIBSRC})

target_link_libraries(Lab13 library)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}-DLIB_TEST -Wall")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG}")
set(CMAKE_CXX_FLAGS_RELEASE "-DNDEBUG -O2")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

install(TARGETS Lab13 DESTINATION bin)

add_custom_target(info # ALL # target zoo is always built
    COMMAND echo "Build commands:"
    COMMAND cat compile_commands.json
    COMMAND echo ""
    COMMAND echo ""
    COMMAND echo "Debug info:"
    COMMAND readelf --debug-dump=decodedline Lab13
    DEPENDS Lab13
)

#cmake_minimum_required(VERSION 3.1)
#project(CPPLab2020)
#
##----------------------------------------------------------------------------
#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_COLOR_MAKEFILE ON)
#set(CMAKE_CXX_FLAGS "-Wall") # -DCMAKE_CXX_COMPILER=clang++
#set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG}")
#set(CMAKE_CXX_FLAGS_RELEASE "-DNDEBUG -O0")
#
##----------------------------------------------------------------------------
## prevent for in-source building
#set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
#set(CMAKE_DISABLE_SOURCE_CHANGES  ON)
#if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
#  message(SEND_ERROR "In-source builds are not allowed.")
#endif ()
#
##----------------------------------------------------------------------------
#set(PROJECT_LINK_DIRECTORY ${PROJECT_SOURCE_DIR})
#add_compile_options(${CMAKE_CXX_FLAGS})
#
##----------------------------------------------------------------------------
## Create library
## --- implicite ---
## include_directories(${PROJECT_SOURCE_DIR}/include)
## file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")
## add_library(CPPLabSolution SHARED ${SOURCES})
#
## --- explicite ---
#add_library(CPPLabSolution SHARED src/Meadow.cpp src/Animals.cpp)
#
##----------------------------------------------------------------------------
## Create executable
#add_executable(Lab13 main.cpp)
#target_link_libraries(Lab13 CPPLabSolution)
#
##add_executable(CPPTestExe src/test.cpp)
##target_link_libraries(CPPTestExe)