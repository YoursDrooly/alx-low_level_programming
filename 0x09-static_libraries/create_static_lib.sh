#!/bin/bash

#remove any existing liball.a file
rm -f liball.a

# get a list of all the .c files in the current directory except main.c
files=$(ls *.c | grep -v "main.c")

# compile each .c file to object code
for file in $files
do
	gcc -Wall -pedantic -Werror -Wextra -c "$file"
done

# create the static library from the object files
ar rcs liball.a *.o
