cmake_minimum_required(VERSION 3.1)
project(Isaacstein-3D VERSION 0.1.0)

include(CTest)
enable_testing()

#include_directories ("C:/SFML-2.5.1/include")


## If you want to link SFML statically
#set(SFML_STATIC_LIBRARIES TRUE)

## In most cases better set in the CMake cache
#set(SFML_DIR "C:/SFML-2.5.1/lib/cmake/SFML")

## If you want to link SFML statically
set(SFML_STATIC_LIBRARIES TRUE)

## In most cases better set in the CMake cache
set(SFML_DIR "SFML/SFML-2.5.1/lib/cmake/SFML")


find_package(SFML 2.5 COMPONENTS graphics REQUIRED)

include_directories(headers)
include_directories(utility/headers)

add_executable(Isaacstein-3D app/app.cpp
src/Map.cpp headers/Map.h
src/Player.cpp headers/Player.h
src/Wall.cpp headers/Wall.h
utility/src/Point.cpp utility/headers/Point.h)

target_link_libraries (Isaacstein-3D sfml-graphics sfml-window sfml-system)
#target_link_libraries (Isaacstein-3D sfml-system sfml-window sfml-graphics sfml-network sfml-audio)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
