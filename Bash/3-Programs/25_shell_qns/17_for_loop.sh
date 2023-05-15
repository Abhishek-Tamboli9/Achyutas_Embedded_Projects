#!/bin/sh

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Sun 14 May 2023
# File           : 17_for_loop.sh
# Title          : For loop program
# Description    : A script to print sum of N natural numbers using for loop
#

Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green
White='\033[0;37m'        # White

echo "***** Sum of N natural numbers *****"
echo -n "Enter a number: "
read NUM

let SUM=0; 
for I in `seq $NUM` 			# seq command provides a sequence of numbers from 0 to $NUM
do
	SUM=$(($SUM + $I))
	I=$((${I} + 1))
done

echo "The sum of the first $NUM numbers is: $SUM"
