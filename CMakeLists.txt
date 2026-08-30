cmake_minimum_required(VERSION 3.10)
project(chess LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

file(GLOB_RECURSE APP_SOURCES
    ${CMAKE_SOURCE_DIR}/src/*.cpp
)

include(FetchContent)
FetchContent_Declare(
    raylib 
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG 6.0
)
FetchContent_MakeAvailable(raylib)

add_executable(chess ${APP_SOURCES})

target_include_directories(chess PRIVATE ${CMAKE_SOURCE_DIR}/src)

target_compile_options(chess PRIVATE -Wall -Wextra -Wpedantic)

target_link_libraries(chess PRIVATE raylib)
