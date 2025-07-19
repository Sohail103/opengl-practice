cmake_minimum_required(VERSION 3.10)
project(OpenGLProject)

set(CMAKE_CXX_STANDARD 17)

# GLFW
find_package(PkgConfig REQUIRED)
pkg_search_module(GLFW REQUIRED glfw3)

# Add include directories
include_directories(
    ${GLFW_INCLUDE_DIRS}
    glad/include
)

# Source files
set(SOURCES
    main.cpp
    glad/src/gl.c
)

# Create executable
add_executable(App ${SOURCES})

# Link libraries
target_link_libraries(OpenGLApp
    ${GLFW_LIBRARIES}
    dl
)