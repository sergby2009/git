cmake_minimum_required(VERSION 3.5.0)
project(helloworld VERSION 0.1.0 LANGUAGES C CXX)
add_compile_options(-Wall -Wextra -Wpedantic -Weffc++ -Wconversion -Wsign-conversion -pedantic-errors)
add_executable(helloworld hello.cpp)

