#!/bin/sh

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Mon 15 May 2023
# File           : 20_functions.sh
# Title          : Functions
# Description    : A script to show the usgae of functions
#

Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green
White='\033[0;37m'        # White

echo "***** Functions *****"

print_name(){
	echo "Hello world"
	echo "${Green}My name is Abhishek"
}

print_name
