CMAKE_MINIMUM_REQUIRED(VERSION 3.13)

INCLUDE($ENV{TOOLS_ROOT}/cmake_config/modules_group_linux_rules.txt)

SET(GROUP_SUBDIRS )
SET(MODULE_SUBDIRS LinkedListUT)
SET(UT_SUBDIRS )
SET(SUBDIRS_BUILD_SEQ LinkedListUT)

INCLUDE($ENV{TOOLS_ROOT}/cmake_config/modules_group_linux_subdirs.txt)