# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.20)

project ("Hello")

# Add source to this project's executable.
add_executable (Hello "main.cpp" "main.h")
