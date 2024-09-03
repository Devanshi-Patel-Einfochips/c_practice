# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/devanshi/Downloads/C++_Code/protobuf_using_cmake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/devanshi/Downloads/C++_Code/protobuf_using_cmake/build

# Include any dependencies generated for this target.
include CMakeFiles/persone1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/persone1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/persone1.dir/flags.make

personData.pb.h: ../personData.proto
personData.pb.h: /usr/local/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/devanshi/Downloads/C++_Code/protobuf_using_cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running cpp protocol buffer compiler on personData.proto"
	/usr/local/bin/protoc --cpp_out /home/devanshi/Downloads/C++_Code/protobuf_using_cmake/build -I /home/devanshi/Downloads/C++_Code/protobuf_using_cmake /home/devanshi/Downloads/C++_Code/protobuf_using_cmake/personData.proto

personData.pb.cc: personData.pb.h
	@$(CMAKE_COMMAND) -E touch_nocreate personData.pb.cc

CMakeFiles/persone1.dir/personCode.cpp.o: CMakeFiles/persone1.dir/flags.make
CMakeFiles/persone1.dir/personCode.cpp.o: ../personCode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/devanshi/Downloads/C++_Code/protobuf_using_cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/persone1.dir/personCode.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/persone1.dir/personCode.cpp.o -c /home/devanshi/Downloads/C++_Code/protobuf_using_cmake/personCode.cpp

CMakeFiles/persone1.dir/personCode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/persone1.dir/personCode.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/devanshi/Downloads/C++_Code/protobuf_using_cmake/personCode.cpp > CMakeFiles/persone1.dir/personCode.cpp.i

CMakeFiles/persone1.dir/personCode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/persone1.dir/personCode.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/devanshi/Downloads/C++_Code/protobuf_using_cmake/personCode.cpp -o CMakeFiles/persone1.dir/personCode.cpp.s

CMakeFiles/persone1.dir/personData.pb.cc.o: CMakeFiles/persone1.dir/flags.make
CMakeFiles/persone1.dir/personData.pb.cc.o: personData.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/devanshi/Downloads/C++_Code/protobuf_using_cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/persone1.dir/personData.pb.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/persone1.dir/personData.pb.cc.o -c /home/devanshi/Downloads/C++_Code/protobuf_using_cmake/build/personData.pb.cc

CMakeFiles/persone1.dir/personData.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/persone1.dir/personData.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/devanshi/Downloads/C++_Code/protobuf_using_cmake/build/personData.pb.cc > CMakeFiles/persone1.dir/personData.pb.cc.i

CMakeFiles/persone1.dir/personData.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/persone1.dir/personData.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/devanshi/Downloads/C++_Code/protobuf_using_cmake/build/personData.pb.cc -o CMakeFiles/persone1.dir/personData.pb.cc.s

# Object files for target persone1
persone1_OBJECTS = \
"CMakeFiles/persone1.dir/personCode.cpp.o" \
"CMakeFiles/persone1.dir/personData.pb.cc.o"

# External object files for target persone1
persone1_EXTERNAL_OBJECTS =

persone1: CMakeFiles/persone1.dir/personCode.cpp.o
persone1: CMakeFiles/persone1.dir/personData.pb.cc.o
persone1: CMakeFiles/persone1.dir/build.make
persone1: /usr/local/lib/libprotobuf.so
persone1: CMakeFiles/persone1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/devanshi/Downloads/C++_Code/protobuf_using_cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable persone1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/persone1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/persone1.dir/build: persone1

.PHONY : CMakeFiles/persone1.dir/build

CMakeFiles/persone1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/persone1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/persone1.dir/clean

CMakeFiles/persone1.dir/depend: personData.pb.h
CMakeFiles/persone1.dir/depend: personData.pb.cc
	cd /home/devanshi/Downloads/C++_Code/protobuf_using_cmake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/devanshi/Downloads/C++_Code/protobuf_using_cmake /home/devanshi/Downloads/C++_Code/protobuf_using_cmake /home/devanshi/Downloads/C++_Code/protobuf_using_cmake/build /home/devanshi/Downloads/C++_Code/protobuf_using_cmake/build /home/devanshi/Downloads/C++_Code/protobuf_using_cmake/build/CMakeFiles/persone1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/persone1.dir/depend

