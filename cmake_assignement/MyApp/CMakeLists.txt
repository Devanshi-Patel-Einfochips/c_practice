cmake_minimum_required(VERSION 3.16.3)

project("assignemnt")

set(PROJECT_ROOT_DIR "/home/devanshi/Downloads/C++_Code/cmake_assignement")
add_subdirectory(${PROJECT_ROOT_DIR}/SharedLib ${CMAKE_BINARY_DIR}/sharedlib)
add_subdirectory(${CMAKE_SOURCE_DIR}/../StaticLib ${CMAKE_BINARY_DIR}/staticlib)


add_executable(myapp src/main.cpp)
target_link_libraries(myapp sharedlib staticlib)

target_include_directories(myapp PRIVATE 
    ${CMAKE_SOURCE_DIR}/../sharedlib/include
    ${CMAKE_SOURCE_DIR}/../staticlib/include)