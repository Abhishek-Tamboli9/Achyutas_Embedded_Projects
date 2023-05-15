#!/bin/bash

#
# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Mon 15 May 2023
# File           : 26_sed.sh
# Title          : sed program
# Description    : A simple script to learn the usgae of sed
#

echo "I am in GREEN" | sed ''/GREEN/s//`printf "\033[0;32m"`/''
