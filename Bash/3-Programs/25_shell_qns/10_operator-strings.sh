#!/bin/sh

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Sun 14 May 2023
# File           : 10_operator-strings.sh
# Title          : Test and branch construct program
# Description    : A script to show usgae of srtring compare using = and !=  
#

Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green

echo "***** String compare *****"

read -p "Enter string1: " str1
read -p "Enter string2: " str2

if [ $str1 = $str2 ]
then
	echo "${Green}String matched!!!"
elif [ $str1 != $str2 ]
then
	echo "${Red}String not correct!!!"
fi
