//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	int spaces=0,specialcharacters=0,digits=0;
	int i=0;
	puts("enter a string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	if( str[i]== ' ')
	{
		spaces++;
	}
	else if( str[i] >='0' && str[i]<='9' )
	{
		digits++;
	}
	else if( str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
	{
		
	}
	else
	{
		specialcharacters++;
	}
}
	printf("number of spaces =%d",spaces);
	printf("number of digits=%d",digits);
	printf("number of special characters=%d",specialcharacters);
}
