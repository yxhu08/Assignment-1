//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void reversestring(char *start,char *end)
{
	 
	char temp;
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
}
	int main()
	{
		char sentence[100];
		char word[50];
		int i=0,j=0;
		puts("enter a string");
		gets(sentence);
		 char *start=word;
       char 	*end=word+strlen(word)-1;
		while(*end!='\0')
		{
			if(*end=' ')
			{
				reversestring(start,end-1);
				start=end+1; //moving to next word
			}
			end++; //mpving to next value basically address of the characters
		}
		reveresestring(start,end-1);//reversing last word
		printf("reveresed sentence=%s",sentence);
}
