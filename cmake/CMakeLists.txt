
cmake_minimum_required(VERSION 3.28)

project(
    CMakeYTutorials
    VERSION 1.0.0
    LANGUAGES C CXX
)

message(STATUS "=========================================")
message(STATUS "CHECKING CMAKE VARIABLES:")
message(STATUS "CMAKE_CURRENT_SOURCE_DIR is: ${CMAKE_CURRENT_SOURCE_DIR}")
message(STATUS "PROJECT_SOURCE_DIR is:         ${PROJECT_SOURCE_DIR}")
message(STATUS "=========================================")

add_subdirectory(src)
add_subdirectory(app)


