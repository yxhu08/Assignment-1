//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	int index,i;
	int frequency[26]={0};
	puts("enter string");
	gets(str);
for(i=0;str[i]!='\0';i++)

	{
		if(str[i]>='a' && str[i]<='z')
		{
			index=str[i]-'a';
			frequency[index]++;
			if(frequency[index]>1)
			{
			printf("first repeating lowercase letter found %c",str[i]);
		}
	}
	}
	printf("\nnot found");



}
