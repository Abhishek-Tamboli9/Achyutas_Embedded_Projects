#!/bin/sh

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Sun 14 May 2023
# File           : 19_cmd_line.sh
# Title          : Command line script
# Description    : A script to show the usgae of cmd line
#

#	$#	: No. of Arguments
#	$@	: All arg printing recognise IFS
#	$*	: All arg printing recognise IFS

Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green
White='\033[0;37m'        # White

echo "***** Command line Argument *****"

echo "Total no. of argument: $#"
echo "Argument list: $@" # Commonly used
echo "Argument list: $*"

# Iterate over arguments ($@)
for ARG in $@
do
    echo $ARG
done
