

add_library(math_lib math_lib.c)


# target_include_directories(math_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include )


#  alternative bulitin load_command
target_include_directories(math_lib PUBLIC ${PROJECT_SOURCE_DIR}/include)

