/*

# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Mon 15 May 2023
# File           : 12_ascii2int.c
# Title          : ASCII to Integer 
# Description    : Program to convert Ascii to integer number

*/

#include <stdio.h>

int asciiToInt(char c) 
{
	return (int) c; 				// Casting the ASCII character to an integer
}


int main() 
{
	int value;
	char c;

	printf("Enter an ASCII character: ");
	scanf("%c", &c);

	value = asciiToInt(c);
	printf("Integer value of '%c' is %d\n", c, value);

	return 0;
}

