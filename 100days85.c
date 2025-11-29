//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	int k=0;
	int size=0;
	int i,j;
	char temp;//because here we are reversing characters not integers
	puts("enter a string");
	gets(str);
	while(str[k]!='\0')
	{
		size++;
		k++;
	}
	for(i=0,j=size-1;i<=j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	printf(" Reversed string is = %s",str);
}
