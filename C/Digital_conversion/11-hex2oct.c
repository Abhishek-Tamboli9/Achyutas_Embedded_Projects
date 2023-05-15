/*

# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Mon 15 May 2023
# File           : 11-hex2oct.c
# Title          : Hexadecimal to octal
# Description    : Program to convert Hexadecimal to octal

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

void hex2oct(char hex[],char oct[])
{
	int j=0,rem;
	unsigned int num = hex2dec(hex);
	while(num)
	{
		rem = num % 8;
		oct[j] = rem + 48;
		num = num / 8;
		++j;
	}
	oct[j] = '\0';
}

int main()
{
	char hex[SIZE],oct[SIZE];
	unsigned int dec=0,i,len;

	printf("Enter the Hexadecimal number:");
	scanf("%[^\n]s",hex);

	if(hex[0] != '0' && (hex[1] != 'x' || hex[1] != 'X'))
	{
		printf("Enter hexadecimal number in correct format: 0x...\n");
		return 0;
	}

	hex2oct(hex,oct);
	len = strlen(oct);

	printf("Decimal of %s:",hex);
	
	for(i=len-1; i!= -1; i--)
		printf("%c",oct[i]);
	printf("\n");
	return 0;
}
