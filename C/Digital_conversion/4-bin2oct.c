/*

# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Mon 15 May 2023
# File           : 4_bin2oct.c
# Title          : Binary to Octal 
# Description    : Program to convert Binary to Octal number

*/

#include<stdio.h>

unsigned int bin2dec(unsigned int num)
{
	unsigned int rem,n=0,pos=0,oct=2;
	
	while(num)//001 101
	{	
		rem = num % 10;
		n = n | (rem << pos);
		pos = pos+1;
		num = num / 10;
	}
	return n;
}

unsigned int bin2oct(unsigned int num)	//this function first send binary data for conversion to decimal than it converts it to octal
{
	num = bin2dec(num);
	unsigned int rem,n=0;
	while(num)
	{
		rem = num % 8;
		n = n*10 + rem;
		num = num / 8;
	}
	return n;
}

int main()
{
	unsigned int num,oct,n=0,rem;
	printf("Enter binary number:");
	scanf("%d",&num);
	
	oct = bin2oct(num);
	while(oct)
	{
		rem = oct % 10;
		n = n*10 + rem;
		oct = oct / 10;
	}
	oct = n;
	
	printf("Octal of %d:%d",num,oct);	
	printf("\n");
	return 0;
}
