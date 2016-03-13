cmake_minimum_required(VERSION 2.8)

project(FlappyCxxWeb)

set(CMAKE_BUILD_TYPE Debug)

add_definitions("-std=c++1y")
include_directories("./src/")
add_subdirectory(modules/flappyengine)
add_subdirectory(modules/flappycxx)

file(GLOB SOURCES src/*.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} FlappyEngine)
target_link_libraries(${PROJECT_NAME} FlappyCxx)

file(COPY res DESTINATION ${CMAKE_BINARY_DIR})
