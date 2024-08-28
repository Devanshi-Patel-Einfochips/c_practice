
cmake_minimum_required(VERSION 3.16.3)

project("sharedlib_project")

add_library(sharedlib SHARED src/SharedHello.cpp)

target_include_directories(sharedlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)