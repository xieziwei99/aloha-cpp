cmake_minimum_required(VERSION 3.15)
project(aloha)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(common)

add_executable(aloha main.cpp)

target_link_libraries(aloha common)