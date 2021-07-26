echo configure:$PRODUCT_PLATFORM-$BUILD_TYPE-$PRODUCT_TARGET

export REPO_ROOT=$PWD
echo $REPO_ROOT

export REPO_PARENT=`dirname $REPO_ROOT`

export TOOLS_ROOT=$REPO_PARENT/BuildConfig
echo TOOLS_ROOT:$TOOLS_ROOT
export TOOLS_BIN=$TOOLS_ROOT/bin

# Output
export OUTPUT_ROOT=$REPO_PARENT/Output
if [ ! -d $OUTPUT_ROOT ];then
    mkdir -p $OUTPUT_ROOT
fi
export OUTPUT_BIN_BUILD=$OUTPUT_ROOT/bin
export OUTPUT_INC_BUILD=$OUTPUT_ROOT/include
export OUTPUT_LIB_BUILD=$OUTPUT_ROOT/lib
export OUTPUT_TEMP_BUILD=$OUTPUT_ROOT/temp

export LD_LIBRARY_PATH=$OUTPUT_BIN_BUILD:$LD_LIBRARY_PATH
export PATH=$OUTPUT_BIN_BUILD:$TOOLS_BIN:$PATH

export M_MAKE_COMMAND=m
if [ ! -x $TOOLS_BIN/$M_MAKE_COMMAND ];then
    echo Add executable permission to $TOOLS_BIN/$M_MAKE_COMMAND
    chmod a+x $TOOLS_BIN/$M_MAKE_COMMAND
fi

source $TOOLS_BIN/build_linux_setup3rds.sh
