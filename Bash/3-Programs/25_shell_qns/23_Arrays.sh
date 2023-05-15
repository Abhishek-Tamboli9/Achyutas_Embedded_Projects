#!/bin/bash

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Mon 15 May 2023
# File           : 23_Arrays.sh
# Title          : Arrays
# Description    : A script to show the creation and usage of arrays
#

Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green
White='\033[0;37m'        # White
BYellow='\033[1;33m'      # Yellow

#echo "***** Arrays *****"

#Declare an array

FRUITS=(apple mango banana orange)

# Print value of each element
echo "element 0: ${FRUITS[0]}"
echo "element 1: ${FRUITS[1]}"
echo "element 2: ${FRUITS[2]}"
echo "element 3: ${FRUITS[3]}"

# Print size / length of array
echo "Length: ${FRUITS[@]}"
echo "Whole array: ${FRUITS[@]}"
echo "Whole array: ${FRUITS[*]}"

echo "Looping over array elements"

# Iterate over array elements

for ITEM in ${FRUITS[@]}
do
    echo $ITEM
done
