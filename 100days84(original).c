//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	int i;
	puts("enter a string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		str[i]=str[i]-32;

	}
	printf("%s",str);
}
