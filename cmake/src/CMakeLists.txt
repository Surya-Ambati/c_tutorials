

add_library(${LIBRARY_NAME} STATIC ${SRC_FILES})

# STATIC - windows -.lib, linux -.a (exe), SHARED - windowa(.dll), linux (.so), MODULE, INTERFACE
# target_include_directories(math_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include )


#  alternative bulitin load_command
target_include_directories(${LIBRARY_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)
#  private - , interface - , public - both private + interface
