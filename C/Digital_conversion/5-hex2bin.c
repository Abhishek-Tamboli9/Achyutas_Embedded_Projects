/*

# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Mon 15 May 2023
# File           : 5-hex2bin.c
# Title          : Hexadecimal to Binary 
# Description    : Program to convert Hexadecimal to Binary number

*/

#include <stdio.h>
#include <string.h>

void hex2bin(const char hex[], char bin[])
{
	int i,value = 0;
	char c;
	for (i=0;i<strlen(hex);i++) 
	{
        	c = hex[i];
        	value = 0;
        	if (c >= '0' && c <= '9') 
		{
			value = c - 48;
        	} 
		else if (c >= 'A' && c <= 'F') 
		{
            		value = c - 65 + 10;
        	} 
		else if (c >= 'a' && c <= 'f') 
		{
            		value = c - 97 + 10;
        	}
        	for (int j = 0; j < 4; j++) 
		{
            		bin[i * 4 + j] = (value & (1 << (3 - j))) ? '1' : '0';
        	}
    	}
}

int main()
{
	char hex[100];
	char bin[400];

	printf("Enter a hexadecimal number: ");
	scanf("%s", hex);

	hex2bin(hex, bin);
	printf("Binary equivalent: %s\n", bin);

	return 0;
}

