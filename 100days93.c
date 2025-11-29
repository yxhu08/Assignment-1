//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
//just need to check frequency and length of two  strings.
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[40];
	char str2[40];
	int i;
	int freq1[26]={0};
	int freq2[26]={0};
	int index;
	puts("enter first string");
	gets(str1);
	puts("enter second string");
	gets(str2);
	if(strlen(str1)!= strlen(str2))
	printf("not anagrams");
	//break;//can't use break without loops
	for(i=0;str1[i]!='\0';i++)
	{
	if(str1[i]>='a' && str1[i]<='z')
	{
		index=str1[i]-'a';
		freq1[index]++;
		
	}
}
	for(i=0;str2[i]!='\0';i++)
	{
		if(str2[i]>='a' && str2[i]<='z')
	{
		index=str2[i]-'a';
		freq2[index]++;
	}
}
for(i=0;i<=26;i++)
{
	if(freq1[i]==freq2[i]);
	
}
printf("anangrams");
}
