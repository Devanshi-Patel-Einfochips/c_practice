cmake_minimum_required(VERSION 3.16.3)
project(NestedProject)

# Find Protobuf package
find_package(Protobuf REQUIRED)

# Generate C++ source files from .proto files
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS nestedMessage.proto)

# Add executable
add_executable(nestE1 nestedCode.cpp ${PROTO_SRCS})

# Include directories
target_include_directories(nestE1 PRIVATE ${Protobuf_INCLUDE_DIRS} ${CMAKE_BINARY_DIR})
message(STATUS "Protobuf Include Directories: ${Protobuf_INCLUDE_DIRS}")
message(STATUS "Protobuf Libraries: ${Protobuf_LIBRARIES}")

# Link Protobuf libraries
target_link_libraries(nestE1 PRIVATE ${Protobuf_LIBRARIES})
