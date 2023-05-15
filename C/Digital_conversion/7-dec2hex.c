/*

# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Mon 15 May 2023
# File           : 7-dec2hex.c
# Title          : decimal to Hexadecimal 
# Description    : Program to convert decimal to Hexadecimal

*/

#include<stdio.h>
#include<string.h>
void convert(unsigned int num,char hex[])//1123
{
	int j=0,rem;
	while(num)
	{
		rem = num % 16;
		if(rem >= 0 && rem <= 9)
			hex[j] = rem + 48;
		else if(rem >=10 && rem <= 15)
			hex[j] = rem + 55;
	
		num = num / 16;
		++j;
	}
	hex[j] = '\0';
}

int main()
{
	unsigned int num,i;
	char hex[100];
	printf("Enter Decimal number:");
	scanf("%d",&num);
	
	convert(num,hex);
	printf("Hexadecimal of %d:",num);
	i = strlen(hex)-1;
	for( ;i!=-1;i--)
	{
		printf("%c",hex[i]);
	}
	printf("\n");
	return 0;
}
