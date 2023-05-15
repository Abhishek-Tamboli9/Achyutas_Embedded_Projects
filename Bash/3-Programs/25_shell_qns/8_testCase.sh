#!/bin/sh

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Sun 14 May 2023
# File           : 8_testCase.sh
# Title          : Test and branch construct program
# Description    : A script to use case 
#

echo "***** Check character is vowel or not *****"

read -p "Enter character:" char

case $char in
		a | A) echo "$char is a vowel!";;
		e | E) echo "$char is a vowel!";;
		i | E) echo "$char is a vowel!";;
		o | O) echo "$char is a vowel!";;
		u | U) echo "$char is a vowel!";;
		*) echo "$char is a not a vowel!!!";;
esac





