cmake_minimum_required(VERSION 3.10)
project(MyLib VERSION 1.0.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Library source files
set(SOURCES
    src/mylib.cpp
)

# Create the library
add_library(mylib STATIC ${SOURCES})

# Include directories
target_include_directories(mylib PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

# Optional: Create shared library version
add_library(mylib_shared SHARED ${SOURCES})
target_include_directories(mylib_shared PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

# Example executable
add_subdirectory(examples)

# Tests (optional)
enable_testing()
add_subdirectory(tests)
