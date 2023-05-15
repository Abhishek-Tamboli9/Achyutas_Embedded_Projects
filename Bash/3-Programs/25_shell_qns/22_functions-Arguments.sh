#!/bin/sh

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Mon 15 May 2023
# File           : 22_function-Arguments.sh
# Title          : Functions
# Description    : A script to show the usgae of functions and how to pass arguments
#

Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green
White='\033[0;37m'        # White
BYellow='\033[1;33m'      # Yellow

echo "***** Functions with Arguments *****"

sum(){

	echo "Arg count: $#"
    	echo "Arg list: $@"
    	SUM=0
    	# Iterate over function arguments
    	for ARG in $@
    	do
		SUM=`expr $ARG + $SUM`
    	done

    	echo $SUM
}

sum 10 20 30 40 50 
