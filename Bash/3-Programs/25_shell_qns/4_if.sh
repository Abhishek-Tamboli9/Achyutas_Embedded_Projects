#!/bin/sh

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Sun 14 May 2023
# File           : 4_if.sh
# Title          : if program
# Description    : A simple script to use if statement
#

echo "*****Comapring two numbers*****"

read -p "Enter number1:" num1
read -p "Enter number2:" num2

if [ $num1 -gt $num2 ]
then
    echo "num1 greater than num2"
fi
