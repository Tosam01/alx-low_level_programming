#!/bin/bash
gcc -fPIC -g -c -Wall -pedantic -werror -wextra *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o -lc