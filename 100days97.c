//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i=0,j=0;
	char word[50];
	puts("enter a string");
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]!=' ')
		{
		word[j++]=str[i];
		printf("%c",word[1]);
	}
	
		else
		{
		word[j]='\0';
		
	}j++;
		
	}i++;
	word[j]='\0';
	printf("%c",word[1]);
	
}
