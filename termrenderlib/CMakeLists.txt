#./termrenderlib/CMakeLists.txt
cmake_minimum_required(VERSION 3.28)


add_library(termrenderlib
    basic.c
    basic.h
)

target_include_directories(termrenderlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
