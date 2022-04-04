#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.o
ar -rc liball.a *.0
ranlib liball.a
