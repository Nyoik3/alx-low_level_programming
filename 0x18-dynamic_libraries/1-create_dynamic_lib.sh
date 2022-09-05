#!/bin/bash
gcc -g -FPIC -wall -werror -pedantic *.c -shared -o liball.so
