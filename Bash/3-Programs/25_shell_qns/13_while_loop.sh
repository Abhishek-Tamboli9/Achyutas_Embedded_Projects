#!/bin/sh

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Sun 14 May 2023
# File           : 13_while_loop.sh
# Title          : While loop program
# Description    : A script to show usage of while loop
#

Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green
White='\033[0;37m'        # White

echo "***** While loop program  *****"

COUNT=0

while [ $COUNT -lt 5 ]
do
    echo "Loop count is ${COUNT}"
    COUNT=$((COUNT + 1))
done
