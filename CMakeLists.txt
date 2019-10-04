cmake_minimum_required(VERSION 3.14)
project(canvaskid)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-lglut -lGL -lGLU -lm")
add_executable(
        canvaskid main.cpp
        gui/viewport.h
        gui/window.h
        gui/sidebar.h
        gui/canvas.h
        gui/animation.cpp
        gui/animation.h
        gui/canvas.cpp
        gui/canvas.h
        gui/sidebar.cpp
        gui/sidebar.h
        gui/viewport.cpp
        gui/viewport.h
        gui/window.cpp
        gui/window.h
        primitives/colors.cpp
        primitives/colors.h
        primitives/circle.cpp
        primitives/circle.h
        primitives/graph_circle.cpp
        primitives/graph_circle.h
        primitives/graph_line.cpp
        primitives/graph_line.h
        primitives/graph_point.cpp
        primitives/graph_point.h
        primitives/line.cpp
        primitives/line.h
        primitives/point.cpp
        primitives/point.h
        structures/action.cpp
        structures/action.h
        structures/stack.cpp
        structures/stack.h
)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )

target_link_libraries(canvaskid ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )