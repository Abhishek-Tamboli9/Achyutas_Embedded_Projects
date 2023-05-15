#!/bin/sh

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Sun 14 May 2023
# File           : 7_testCase.sh
# Title          : Test and branch construct program
# Description    : A simple script to use case 
#

echo "***** Check character is vowel or not *****"

read -p "Enter character:" char

case $char in
		a) echo "$char is a vowel!";;
		e) echo "$char is a vowel!";;
		i) echo "$char is a vowel!";;
		o) echo "$char is a vowel!";;
		u) echo "$char is a vowel!";;
		*) echo "$char is a not a vowel!!!";;
esac





