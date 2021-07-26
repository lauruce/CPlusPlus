#!/bin/bash

M_MAKE_3RD_INC_DIRS="/home/chengdu/WorkSpace/3rdParty/googletest/build/include"
M_MAKE_3RD_BIN_DIRS=""
M_MAKE_3RD_LIB_DIRS="/home/chengdu/WorkSpace/3rdParty/googletest/build/lib"

export M_MAKE_3RD_INC_DIRS
export M_MAKE_3RD_BIN_DIRS
export M_MAKE_3RD_LIB_DIRS
export PATH=$M_MAKE_3RD_INC_DIRS:$PATH
export LD_LIBRARY_PATH=$M_MAKE_3RD_LIB_DIRS:$LD_LIBRARY_PATH
