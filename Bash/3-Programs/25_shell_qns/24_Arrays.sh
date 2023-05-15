#!/bin/bash

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Mon 15 May 2023
# File           : 24_Arrays.sh
# Title          : Arrays
# Description    : A script to store all cmd line arguments to a array and prints
#

Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green
White='\033[0;37m'        # White
BYellow='\033[1;33m'      # Yellow

echo "***** Arrays *****"

ARG=($*)

echo ${ARG[0]}
echo ${ARG[1]}
echo ${ARG[2]}
echo ${ARG[3]}
echo ${ARG[4]}
