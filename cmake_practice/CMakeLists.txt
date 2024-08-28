cmake_minimum_required(VERSION 3.16.3)
project("hello")

add_library(calc mylib/calc.cpp)
add_executable(out main.cpp )
target_link_libraries(out calc)