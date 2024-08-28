
cmake_minimum_required(VERSION 3.16.3)

project("staticlib_project")

add_library(staticlib SHARED src/staticHello.cpp)

target_include_directories(staticlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)