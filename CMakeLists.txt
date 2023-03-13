cmake_minimum_required(VERSION 3.23)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(QubitSimCPP)

include_directories(./extern/eigen)
add_subdirectory(extern/pybind11)
pybind11_add_module(function function.cpp)