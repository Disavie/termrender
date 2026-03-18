cmake_minimum_required(VERSION 3.28)

project(Test)
set(APP_LIBRARY termrenderlib)
add_subdirectory(${APP_LIBRARY})

include_directories(${APP_LIBRARY})

add_executable(${PROJECT_NAME}
                main.c
                )

target_link_libraries(${PROJECT_NAME} ${APP_LIBRARY})
