/*

# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Mon 15 May 2023
# File           : 1_dec2bin.c
# Title          : Decimal to Binary 
# Description    : Program to convert Decimal to Binary number

*/

#include<stdio.h>
#include<math.h>
unsigned int convert(unsigned int num)
{
	int c=0;
	unsigned int bin=0;
	int i = sizeof(num)*8 - 1;
	for( ;i>=0;i--)
	{
		if(num & (0x1<<i))
		{
			bin = bin * 10 + 1;	
			c++;
		}
		else if(c >=1)
		{	
			bin = bin * 10 + 0;	
		}
	}
	return bin;
}

int main()
{
	unsigned int num;
	printf("Enter Decimal number:");
	scanf("%d",&num);
	
	printf("Binary of %d:%d",num,convert(num));
	
	printf("\n");
	return 0;
}
