/*

# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Mon 15 May 2023
# File           : 2_bin2dec.c
# Title          : Binary to Decimal 
# Description    : Program to convert Binary to Decimal number

*/

#include<stdio.h>

int convert(int num)
{
	int rem,n=0,pos=0;
	
	while(num)
	{	
		rem = num % 10;
		n = n | (rem<<pos);
		pos++;
		num = num / 10;
	}
	return n;
}

int main()
{
	int num;
	printf("Enter binary number:");
	scanf("%d",&num);
	
	printf("Decimal of %d:%d",num,convert(num));
	
	printf("\n");
	return 0;
}
