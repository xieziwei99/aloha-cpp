add_library(common common utils)

add_executable(utils_test utils_test.cpp)

target_link_libraries(utils_test gtest gtest_main)
target_link_libraries(utils_test common)