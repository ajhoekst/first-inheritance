cmake_minimum_required(VERSION 2.8)

include_directories(${inheritance_SOURCE_DIR}/inc)

# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${inheritance_SOURCE_DIR}/build/bin)

set(SRCS
    shape.cpp
    shape2d.cpp
    shape3d.cpp
    triangle.cpp
    rectangle.cpp
    square.cpp
    circle.cpp
    box.cpp
    cube.cpp
    sphere.cpp
    tetrahedron.cpp
    pyramid.cpp
)

add_library(inheritance STATIC ${SRCS})
