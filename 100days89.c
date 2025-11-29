//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	int i;
	char ch; //can declare a single character without declaring its size
	int frequency=0;
	puts("enter a string");
	gets(str);
	//puts("enter a character");
	//gets(ch);//gets reads whole string not a single character
	printf("enter a character");
	scanf("%c",&ch);
	for(i=0;str[i]!='\0';i++)
	{
		//if(strcmp(str[i],ch)==0)//strcmp compare two strings not a string and a single character
		if(str[i]== ch)
		frequency++;
	}
	printf("frequency of a character is %d",frequency);
}
