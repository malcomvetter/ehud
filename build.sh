#!/bin/sh
i586-mingw32msvc-gcc -o ehud.exe ehud.c
upx -9 ehud.exe
