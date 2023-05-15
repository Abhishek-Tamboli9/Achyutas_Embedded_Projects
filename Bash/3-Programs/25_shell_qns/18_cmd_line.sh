#!/bin/sh

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Sun 14 May 2023
# File           : 18_cmd_line.sh
# Title          : Command line script
# Description    : A script to show theusgae of cmd line
#

Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green
White='\033[0;37m'        # White

echo "***** Command line Argument *****"

echo "Total no. of argument: $#"
echo "Program name: $0"
echo "1st argument: $1"
echo "2nd argument: $2"
echo "3rd argument: $3"
