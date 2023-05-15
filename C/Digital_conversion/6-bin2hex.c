/*

# Author         : Abhishek Tamboli (https://github.com/Abhishek-Tamboli9) 
# Date           : Mon 15 May 2023
# File           : 6-bin2hex.c
# Title          : Binary to Hexadecimal 
# Description    : Program to convert Binary to Hexadecimal number

*/

#include<stdio.h>
#include<string.h>
#define MAX 256

void bin2hex(unsigned char bin[],unsigned char hex[])//000110001100
{
	int i,j=0,num=0;
	for(i=0;i<strlen(bin);i=i+4)
	{
		num = 0;
		if(bin[i] == '1')
			num = num + 8;
		if(bin[i+1] == '1')
			num = num + 4;
		if(bin[i+2] == '1')
			num = num + 2;
		if(bin[i+3] == '1')
			num = num + 1;

		if(num >= 1 && num <= 9)
			hex[j] = num + 48;
		else if(num >= 10 && num <= 15)
			hex[j] = num + 55;
		j++;
	}
	hex[j] = '\0';
}

int main()		
{
	int i;
	unsigned char bin[MAX],hex[MAX];
	printf("Enter Binary:");
	scanf("%[^\n]s",bin);
   	if (strlen(bin) % 4 != 0) 
	{
        	printf("Invalid input length: %ld\n",strlen(bin));
        	return 0;
	} 
	bin2hex(bin,hex);

	printf("HEXADECIMAL OF %s : %s\n",bin,hex);
	return 0;
}
