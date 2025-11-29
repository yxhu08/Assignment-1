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
int main()
{
	char sentence[100];
	char word[50];
	int i=0,j=0;
	puts("enter a string");
	gets(sentence);
	while(sentence[i]!='\0')
	{
		if(sentence[i]==' ' && sentence[i]=='\t')
		{
			word[j++]=sentence[i];
		}
		else
		word[j]='\0';
		char *start=word;
		char *end=word+strlen(word)-1; //here word points to 1st character address for example 1000 and then length of word points to address of null character and -1 points finally
		//to address of last character
		char temp;
		while(start<end)
		{
			temp=*start;
			*start=*end;
			*end=temp;
			start++;
			end--;
		}
		printf("%s",word);
		j=0;
		
	}
	i++;
	word[j]='\0';
	char *start=word;
	char *end=word+strlen(word)-1;
	char temp;
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
		
	}
	printf("%s",word);

	}
