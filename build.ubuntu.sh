#!/bin/sh

if [ "$1" = "clean" ]; then
	rm -rf bin
	rm -rf build
	rm -rf lib
	echo "> clean done <"
	exit 0
fi

if [ "$XYO_PATH_REPOSITORY" = "" ]; then
	XYO_PATH_REPOSITORY=../.repository/ubuntu-x64
fi

# --- build

FILE_TO_CS=$XYO_PATH_REPOSITORY/bin/file-to-cs.elf
XYO_CC=$XYO_PATH_REPOSITORY/bin/xyo-cc.elf

XLIB_STATIC=""
XLIB_STATIC="$XLIB_STATIC --use-project=libquantum-script.static"

XLIB=""
XLIB="$XLIB --use-project=libquantum-script"

if ! $FILE_TO_CS --touch=source/quantum-script-extension-make.cpp --file-in=source/quantum-script-extension-make.js --file-out=source/quantum-script-extension-make.src --is-string --name=extensionMakeSource ; then
	echo "Error: build error"
	exit 1
fi
if ! $XYO_CC --mode=$1 --lib qse-make --project-base=quantum-script-extension-make --source-is-separate $XLIB_STATIC ; then
	echo "Error: build error"
	exit 1
fi
if ! $XYO_CC --mode=$1 --dll qse-make --project-base=quantum-script-extension-make --no-version --source-is-separate --def=QUANTUM_SCRIPT_EXTENSION_MAKE_MODULE_DYNAMIC_LINK $XLIB ; then
	echo "Error: build error"
	exit 1
fi

cp -f $XYO_PATH_REPOSITORY/bin/libxyo-core.so bin/libxyo-core.so
cp -f $XYO_PATH_REPOSITORY/bin/libquantum-script.so bin/libquantum-script.so

