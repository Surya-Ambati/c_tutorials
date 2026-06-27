
cmake_minimum_required(VERSION 3.28)

project(
    CMakeYTutorials
    VERSION 1.0.0
    LANGUAGES C CXX
)

set(LIBRARY_NAME "math_lib")
set(EXECUTABLE_NAME "mainapp")

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# for cpp
# set(CMAKE_CXX_STANDARD 23)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_CXX_EXTENSIONS OFF)

option(COMPILE_EXECUTABLE "whether to compile the main app" OFF)

message(STATUS "===========================")
message(STATUS "Checking Cmake built in variables:")
message(STATUS "value of source dir: ${CMAKE_CURRENT_SOURCE_DIR}")
message(STATUS "value of project dir:  ${PROJECT_SOURCE_DIR}")
message(STATUS "===========================")

add_subdirectory(src)

if(COMPILE_EXECUTABLE)
    add_subdirectory(app)
else()
    message(STATUS "CMAKE is not compiling app directory, its only compiling library!!!")
endif()



