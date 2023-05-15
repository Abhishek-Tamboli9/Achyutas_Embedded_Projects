#!/bin/sh

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Sun 14 May 2023
# File           : 14_while_loop.sh
# Title          : While loop program
# Description    : A script to print sum of n natural numbers
#

Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green
White='\033[0;37m'        # White

echo "***** Sum of N natural numbers  *****"

read -p "Enter number: " NUM
i=1
sum=0
while [ $i -le $NUM ]
do
	sum=$(($i + $sum))
    	i=$(($i + 1))
done

echo "${Green}Sum of N natural number is $sum"
