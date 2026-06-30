

add_executable(${EXECUTABLE_NAME} main.c)

# target_include_directories(${EXECUTABLE_NAME} PUBLIC ${CMAKE_BINARY_DIR})

target_link_libraries(${EXECUTABLE_NAME} math_lib util_lib)
