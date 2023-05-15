#!/bin/sh

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Sun 14 May 2023
# File           : 6_elif.sh
# Title          : elif program
# Description    : A simple script to use elif statement
#

echo "*****Comapring two numbers*****"

read -p "Enter number1:" num1
read -p "Enter number2:" num2

if [ $num1 -gt $num2 ]
then
    echo "Num1 greater than Num2"
elif [ $num1 -lt $num2 ]
then
    echo "Num2 greater than Num1"
else 
    echo "Num1 and Num2 are equal"
fi
