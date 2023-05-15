#!/bin/sh

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Mon 15 May 2023
# File           : 21_functions-Arguments.sh
# Title          : Functions
# Description    : A script to show the usgae of functions
#

Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green
White='\033[0;37m'        # White
BYellow='\033[1;33m'      # Yellow

echo "***** Functions *****"

sum(){
	sum=$(($1+$2))
	echo "${BYellow}$sum"
}

#if [ $# -eq 2 ]
#then
	sum 10 20
#fi
