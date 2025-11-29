//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int count=0;
	printf("enter a string");
	fgets(str,sizeof(str),stdin); //used at the place of scanf str taking string as input 
	str[strcspn(str,"\n")] = '\0'; //removes newline from string as when we use fgets it takes both "\n" and "\0 " at the end of the string
	while(str[count]!='\0')
	{
		count++;
	}
	printf("number of character =%d",count);
}
