#!/bin/sh

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Sun 14 May 2023
# File           : 12_operators-logical.sh
# Title          : operator - logical program
# Description    : A script to show usage of logical operator
#

Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green
White='\033[0;37m'        # White

echo "***** Check number between range *****"

read -p "Enter Number: " NUM

# Check whether a number is between 10 and 20 (Using AND -a operator)
if [ $NUM -ge 10 -a $NUM -le 20 ]
then
    echo "${Green}$NUM is between 10 and 20"
else
    echo "${Red}$NUM is NOT between 10 and 20"
fi

read -p "Enter another NUM: " NUM

# Check whether a number is between 10 and 20 (Using OR -o operator)
if [ $NUM -lt 10 -o $NUM -gt 20 ]
then
    echo "${Red}$NUM is NOT between 10 and 20"
else
    echo "${Green}NUM is between 10 and 20"
fi
