#!/bin/sh

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Sun 14 May 2023
# File           : 3_varExp.sh
# Title          : Varaible and expression program
# Description    : A simple script to understand usage of variable and expression
#

read -p "Enter num1: " num1
read -p "Enter num2: " num2

sum=$(($num1+$num2))
echo "Sum:$sum"
