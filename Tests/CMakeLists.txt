#.Tests/CMakeLists.txt
cmake_minimum_required(VERSION 3.28)

add_executable(test_main test_main.c)
target_link_libraries(test_main PRIVATE termrenderlib)

add_executable(test_basic test_basic.c)
target_link_libraries(test_basic PRIVATE termrenderlib)

add_executable(test_utils test_utils.c)
target_link_libraries(test_utils PRIVATE termrenderlib)
