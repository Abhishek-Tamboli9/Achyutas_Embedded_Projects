#!/bin/sh

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Sun 14 May 2023
# File           : 15_for_loop.sh
# Title          : For loop program
# Description    : A script to use for loop
#

Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green
White='\033[0;37m'        # White

echo "***** For loop  *****"

COUNT=0

for i in 0 1 2 3 4
do
    echo "${Red}Loop count is ${COUNT}"
    COUNT=$((COUNT + 1))
done
