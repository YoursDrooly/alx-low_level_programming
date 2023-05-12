#!/bin/bash

#remove any existing liball.a file
rm -f liball.a

# compile each .c file to object code
gcc -Wall -Werror -Wextra -pedantic -c *.c

# create the static library from the object files
ar rcs liball.a *.o
