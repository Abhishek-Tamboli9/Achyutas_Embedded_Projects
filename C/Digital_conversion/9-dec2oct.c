/*

# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Mon 15 May 2023
# File           : 9-dec2oct.c
# Title          : decimal to octal
# Description    : Program to convert decimal to octal

*/

#include<stdio.h>
#include<string.h>
void dec2oct(unsigned int num,char oct[])
{
	int j=0,rem;
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
	unsigned int num,i;
	char oct[100];
	printf("Enter Decimal number:");
	scanf("%d",&num);
	
	dec2oct(num,oct);
	printf("octal of %d:",num);
	i = strlen(oct)-1;
	for( ;i!=-1;i--)
	{
		printf("%c",oct[i]);
	}
	printf("\n");
	return 0;
}
