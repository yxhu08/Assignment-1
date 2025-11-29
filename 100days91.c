//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	char result[40];
	int i,j=0;
	puts("enter a string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if( ! str[i]=='a' || str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O' || str[i]=='U' ))
		{
			result[j]=str[i];
			j++;//for increasing j size
		}
	}
	result[j]='\0';
	printf("%s",result);
}
