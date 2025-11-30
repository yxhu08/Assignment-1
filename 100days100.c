//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int i,j,k,len;
	puts("enter a string");
	gets(str);
	len = strlen(str);
	for(i=0;i<len;i++)
	{
		for(j=i;j<len;j++)
		{
			for(k=i;k<=j;k++)
			{
				printf("%c",str[k]);
			}
			printf("\n");
		}
	}
	
}
