#!/bin/sh

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Sun 14 May 2023
# File           : 9_testCase.sh
# Title          : Test and branch construct program
# Description    : A script to demonstrate case statements with input strings  
#

Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green
cyan='\033[0;36m'        # White

echo "***** Password manager *****"
read -p "Enter password:" pass

case $pass in
		ab23) echo "${Green}Password correct!!!";;
		*) echo "${Red}Password not correct!!!";;
esac
