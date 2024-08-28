cmake_minimum_required(VERSION 3.28.3)

project("hello")

add_library(calc SHARED mylib/calc.cpp)

add_executable(ccal main.cpp)

target_link_libraries(ccal calc)

# WHEN CMAKELIST FILE ALSO IN OTHER DIRECTORY AND LIBRARY IS MADE THERE DIRECTLY INCLUDE SUBDIRECTORY
# add_subdirectory(mylib)

# OPTION
option(USE_CALC "A simple" ON)

if(USE_CALC)
    add_subdirectory(mylib)
endif()


# IN MACROS FILE
#ifdef USE_CALC
    #include<calc.h>
#endif
# list
# When dealing with collections of paths
# list(APPEND INCLUDE_DIRS calc)
# list(REMOVE)
# LIST(SORT )