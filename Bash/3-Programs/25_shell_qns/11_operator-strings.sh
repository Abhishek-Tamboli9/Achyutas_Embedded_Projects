#!/bin/sh

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Sun 14 May 2023
# File           : 11_operator-string.sh
# Title          : operator and string program
# Description    : A script to show usage of string compare operator -z and -n  
#

Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green

echo "***** String compare *****"

read -p "Enter string1: " str1
read -p "Enter string2: " str2

if [ -z "$str1" ]
then
	echo "${Red}String 1 is empty"
else
	echo "${Green}String 1 is not empty"
fi


if [ -n "$str2" ]
then
	echo "${Green}String 2 is not empty"
else
	echo "${Red}String 2 is empty"
fi
