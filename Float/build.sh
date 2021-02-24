#!/bin/bash

export CC=/usr/local/bin/clang
export CXX=/usr/local/bin/clang++
export CXXFLAGS=-stdlib=libc++

export MAKE_3RD_INC_DIRS=/home/chengdu/WorkSpace/3rdParty/boost_1_75_0/build/include
export MAKE_3RD_LIB_DIRS=/home/chengdu/WorkSpace/3rdParty/boost_1_75_0/build/lib

test -e build/ || mkdir build
echo "mkdir build"

test -e bin/ || mkdir bin
echo "mkdir bin"

cd build/
cmake ..
make
