/*

# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Mon 15 May 2023
# File           : 8-hex2dec.c
# Title          : Hexadecimal to decimal
# Description    : Program to convert Hexadecimal to decimal

*/

#include<stdio.h>
#include<string.h>
#define SIZE 256

int mpow(int base, int exponent)
{
	int num=1;
	while(exponent--)
	{
		num  = num * base;
	}
	return num;
}
unsigned int hex2dec(char hex[])//1234
{
	int i,len,expo;
	unsigned int dec=0;
	len = strlen(hex);
	expo = len - 2;
	for(i=2;i<len;i++)
	{
		--expo;
		if(hex[i] >= '0' && hex[i] <= '9')
			dec = ((hex[i] - 48) * mpow(16,expo)) + dec;
		else if(hex[i] >= 'A' && hex[i] <= 'F')
			dec = ((hex[i] - 55) * mpow(16,expo)) + dec;
		else if(hex[i] >= 'a' && hex[i] <= 'f')	
			dec = ((hex[i] - 87) * mpow(16,expo)) + dec;
	}	
	return dec;
}

int main()
{
	char hex[SIZE];
	unsigned int dec=0;
	printf("Enter the Hexadecimal number:");
	scanf("%[^\n]s",hex);
	if(hex[0] != '0' && (hex[1] != 'x' || hex[1] != 'X'))
	{
		printf("Enter hexadecimal number in correct format: 0x...\n");
		return 0;
	}
	dec = hex2dec(hex);

	printf("Decimal of %s:%u\n",hex,dec);
	return 0;
}
