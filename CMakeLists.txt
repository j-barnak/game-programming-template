cmake_minimum_required(VERSION 3.20)
project(game)

set(SOURCES 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Game.cpp
)


# Conan Requirements
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(game ${SOURCES})

target_include_directories(game PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

find_package(SDL2 REQUIRED)
find_package(sol2 REQUIRED)

target_compile_options( game PRIVATE 
    $<$<CONFIG:Debug>:
        -fsanitize=address,leak
    >
)

target_link_options( game PRIVATE 
    $<$<CONFIG:Debug>:
        -fsanitize=address,leak
    >
)

target_compile_features(game
    PRIVATE
        cxx_std_20
)

target_link_libraries(game PRIVATE 
    SDL2::SDL2
    sol2::sol2
)
