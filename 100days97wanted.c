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
	puts("enter a string");
	gets(str);
	if(str[0]!=' ')
	printf("%c\t",toupper(str[0]));// prinitng very first character of the sentence
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\0')
		printf("%c",toupper(str[i+1])); //priitng first charcater of other words of the sentence
	}
}
