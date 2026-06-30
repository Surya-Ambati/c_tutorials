add_library(${UTIL_LIB} STATIC ${UTIL_SRC_FILES})

target_include_directories(${UTIL_LIB} PUBLIC ${PROJECT_SOURCE_DIR}/include)