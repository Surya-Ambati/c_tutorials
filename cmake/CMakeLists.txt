
cmake_minimum_required(VERSION 3.28)

project(
    CMakeYTutorials
    VERSION 1.0.0
    LANGUAGES C CXX
)

# version - 1.0.0 - major, minor, patch 

set(LIBRARY_NAME "math_lib")
set(EXECUTABLE_NAME "mainapp")
set(SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/math_lib/math_lib.c )
set(UTIL_LIB "util_lib")
set(UTIL_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/util_lib/utils.c)


set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# for cpp
# set(CMAKE_CXX_STANDARD 23)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_CXX_EXTENSIONS OFF)

option(COMPILE_EXECUTABLE "whether to compile the main app" ON)

message(STATUS "===========================")
message(STATUS "Checking Cmake built in variables:")
message(STATUS "value of source dir: ${CMAKE_CURRENT_SOURCE_DIR}")
message(STATUS "value of project dir:  ${PROJECT_SOURCE_DIR}")
message(STATUS "===========================")

add_subdirectory(config)
add_subdirectory(src/math_lib)
add_subdirectory(src/util_lib)

if(COMPILE_EXECUTABLE)
    add_subdirectory(app)
else()
    message(STATUS "CMAKE is not compiling app directory, its only compiling library!!!")
endif()

target_include_directories(${LIBRARY_NAME} PUBLIC ${CMAKE_BINARY_DIR}/config/include)


