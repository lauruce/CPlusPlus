CMAKE_MINIMUM_REQUIRED(VERSION 3.13)

INCLUDE($ENV{TOOLS_ROOT}/cmake_config/cxx_module_linux_rules.txt)

SET(PROJECT_BASE_NAME LinkedListUT)

SET(PROJECT_BASE_TYPE EXECUTABLE)

SET(INC_LIST )

SET(CUSTOM_DEFS )

SET(CUSTOM_INC_PATH )

SET(SRC_LIST LinkedListUT.cpp)

SET(DEP_LIST gtest gtest_main pthread)

INCLUDE($ENV{TOOLS_ROOT}/cmake_config/cxx_module_linux_target.txt)