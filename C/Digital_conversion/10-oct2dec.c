/*

# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Mon 15 May 2023
# File           : 10-oct2dec.c
# Title          : octal to decimal
# Description    : Program to convert octal to decimal

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
unsigned int oct2dec(char oct[])
{
	int i,len,expo;
	unsigned int dec=0;
	len = strlen(oct);
	expo = len - 1;
	for(i=1;i<len;i++)
	{
		--expo;
		dec = ((oct[i] - 48) * mpow(8,expo)) + dec;
	}	
	return dec;
}

int main()
{
	char oct[SIZE];
	unsigned int dec=0,i;
	printf("Enter the octal number:");
	scanf("%[^\n]s",oct);
	for(i=0;i<strlen(oct);i++)
	{
		if(oct[0] != '0')
		{
			printf("Enter octal number in correct format: 0...\n");
			return 0;
		}
		else if(oct[i] >= 'A' && oct[i] <= 'Z')
		{
			printf("Enter octal number in correct range: 0-7\n");
			return 0;
		}
		else if(oct[i] >= 'a' && oct[i] <= 'z')
		{
			printf("Enter octal number in correct range: 0-7\n");
			return 0;
		}
	}
	
	dec = oct2dec(oct);

	printf("Decimal of %s:%u\n",oct,dec);
	return 0;
}
