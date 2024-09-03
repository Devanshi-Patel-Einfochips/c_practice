cmake_minimum_required(VERSION 3.16.3)
project(PersonProto)

find_package(Protobuf REQUIRED)

include_directories(${Protobuf_INCLUDE_DIRS})

# Compile the .proto file to generate C++ code
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS person.proto)

# Add the executable
add_executable(person_example src/main.cpp ${PROTO_SRCS} ${PROTO_HDRS})

# Link the protobuf library
target_link_libraries(person_example ${Protobuf_LIBRARIES})
