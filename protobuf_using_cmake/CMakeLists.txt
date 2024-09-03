cmake_minimum_required(VERSION 3.16.3)
project(PersonProto)
INCLUDE(FindProtobuf)
find_package(Protobuf REQUIRED)

# include_directories(${Protobuf_INCLUDE_DIRS})

# Compile the .proto file to generate C++ code
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS personData.proto)

# Add the executable
add_executable(persone1 personCode.cpp ${PROTO_SRCS})

target_include_directories(persone1 PRIVATE ${Protobuf_INCLUDE_DIRS} ${CMAKE_BINARY_DIR})
# Link the protobuf library
target_link_libraries(persone1 PRIVATE ${Protobuf_LIBRARIES})
