
cmake_minimum_required(VERSION 3.28)

project(
    CMakeYTutorials
    VERSION 1.0.0
    LANGUAGES C CXX
)

add_library(math_lib math_lib.c)

add_executable(mainapp main.c)

target_link_libraries(mainapp math_lib)

# cmake .. , cmake --build .

# cmake -S . -B build
# cmake --build build