#!/bin/bash

clear

echo -e "\nSTARTING PROGRAM\n"

# Compile in the src/ directory and run applications in the build/ directory

CC=gcc
LINKER=-lm
SOURCE="src/"
BUILD="build/"
FILETYPE=*.c

# Creates an array containing all the .c extension files
declare -a FILES

for files in $SOURCE$FILETYPE; do

FILES=("${FILES[@]}" "$files")

done

# Compiles .c files in the src directory
if [ "${#FILES[@]}" -gt 0 ]; then
i=0

echo -e "File Names:"

for items in "${FILES[@]}"; do

buildfile="`echo $items | sed 's/\.c//' | sed 's/src\///'`"

i=$i+1

$CC $items -o $BUILD$buildfile $LINKER

echo "$(($i)). `echo $items | sed 's/src\///'`"

done

echo -e "\nWere Compiled\n"

else

echo -e "\n$SOURCE contains no files with .c extension\n"

exit 1

fi

# Run all the compiled apps in the order they were compiled
declare -a APPS

for files in $BUILD*; do

APPS=("${APPS[@]}" "$files")

chmod 711 $files

done

if [ "${#APPS[@]}" -eq "${#FILES[@]}" ]; then

echo -e "Running applications:\n"

for items in "${APPS[@]}"; do

./"$items"

done

echo -e "\nENDING PROGRAM\n"

else

echo -e "\nc files in $SOURCE were not all compiled successfully"

echo -e "\nENDING PROGRAM\n"

exit 1

fi

exit 0


