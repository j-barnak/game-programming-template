cmake_minimum_required(VERSION 3.20)
project(game)

set(SOURCES 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
)

add_executable(game ${SOURCES})

# Conan Requirements
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

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
target_link_libraries(game ${CONAN_LIBS})
