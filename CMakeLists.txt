cmake_minimum_required(VERSION 3.15)
project(aloha)

set(CMAKE_CXX_STANDARD 17)
set(GOOGLETEST_VERSION 1.11.0)

add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_subdirectory(common)

enable_testing()

add_executable(aloha main.cpp)

add_executable(aloha_test test.cpp)

target_link_libraries(aloha common)

target_link_libraries(aloha_test gtest gtest_main)
target_link_libraries(aloha_test common)
