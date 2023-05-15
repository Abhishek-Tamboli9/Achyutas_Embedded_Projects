/*

# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Mon 15 May 2023
# File           : 3-oct2bin.c
# Title          : Octal to Binary 
# Description    : Program to convert Octal to Binary number

*/

#include<stdio.h>

int convert(unsigned int num)			//Function converts the octal number to decimal number

{
	unsigned int rem=0,base=1,dec=0;
	while(num)
	{
		rem = num % 10;
		dec = (rem*base) + dec;
		base = base*8;
		num = num /10;
	}
	printf("\ndecimal:%u\n",dec);
	return dec;
}

void dec2bin(unsigned int n)			//Function converts the decimal number to binary number
{
	int c=0;
	int i =sizeof(n) - 1;
	int num = convert(n);
	for( ;i>=0;i--)
	{
		if(num & (0x1<<i))
		{
			printf("1");
			c++;
		}
		else if(c >=1)
			printf("0");
	}
}

int main()
{
	unsigned int num;			//for octal we need to take unsigned int
	printf("Enter octal number:");
	scanf("%u",&num);
	
	printf("Binary of %u:",num);
	dec2bin(num);
	printf("\n");
	return 0;
}
