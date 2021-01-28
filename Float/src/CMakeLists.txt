include_directories(${PROJECT_SOURCE_DIR}/include $ENV{MAKE_3RD_INC_DIRS})

link_directories($ENV{MAKE_3RD_LIB_DIRS})

aux_source_directory(. SRC_LIST)

add_executable(main ${SRC_LIST})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
