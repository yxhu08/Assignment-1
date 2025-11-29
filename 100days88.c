//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	int i;
	puts("enter a string");
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		str[i]='-';
		i++;
		
	}
	printf("%s",str);
}
