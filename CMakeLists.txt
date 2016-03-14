cmake_minimum_required(VERSION 2.8)

project(FlappyCxxWeb)

set(CMAKE_BUILD_TYPE Debug)

add_definitions("-std=c++1y")
include_directories("./src/")
add_subdirectory(modules/flappyengine)
add_subdirectory(modules/flappycxx)

file(GLOB SOURCES src/*.cpp)

set(EXECUTABLE_NAME flappycxx.html)

add_executable(${EXECUTABLE_NAME} ${SOURCES})

target_link_libraries(${EXECUTABLE_NAME} FlappyEngine)
target_link_libraries(${EXECUTABLE_NAME} FlappyCxx)

file(COPY res DESTINATION ${CMAKE_BINARY_DIR})
