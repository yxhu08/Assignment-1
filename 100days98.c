//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include<string.h>
#include<stdio.h>
int main()
{
	char str[100];
	int i=0,j=0;
	char word[50];
	puts("enter a string");
	gets(str);
	if(str[0]!=' ')
	printf("%c",toupper(str[0]));
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ' && str[i+1]!=' ' && str[i+1]!= '\0')
		printf("%c",toupper(str[i+1]));
		
		
	}
	word[j]='\0';
	printf("%s",word);
}
