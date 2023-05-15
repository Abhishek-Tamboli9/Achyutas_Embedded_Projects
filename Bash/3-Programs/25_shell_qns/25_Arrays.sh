#!/bin/bash

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Mon 15 May 2023
# File           : 25_Arrays.sh
# Title          : Arrays
# Description    : A script to show different type of memory access
#

Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green
White='\033[0;37m'        # White
BYellow='\033[1;33m'      # Yellow

echo "***** Arrays *****"

array=(zero one two three four five)

# Element 0   1   2    3   4   5
echo ${array[0]}       #  zero
echo ${array:0}        #  zero, Parameter expansion of first element,+ starting at position # 0 (1st character).
echo ${array:1}        #  ero, Parameter expansion of first element, + starting at position # 1 (2nd character).
echo "--------------"
echo ${#array[0]}      #  4, Length of first element of array.
echo ${#array}         #  4, Length of first element of array. (Alternate notation)
echo ${#array[1]}      #  3, Length of second element of array. Arrays in Bash have zero-based indexing.
echo ${#array[*]}      #  6, Number of elements in array.
echo ${#array[@]}      #  6, Number of elements in array.
