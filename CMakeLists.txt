cmake_minimum_required(VERSION 2.8)
project(nested_protobuf)

find_package(Protobuf REQUIRED)
add_subdirectory(src)
