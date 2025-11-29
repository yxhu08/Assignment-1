//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	int vowels=0,consonants=0;
	int i;
	puts("enter a string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
			if(str[i]=='a' || str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u' || str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
			{
				vowels++;
			}
			else
			{
				consonants++;
			}
			
		}
	}
	printf("number of vowels=%d",vowels);
	printf("number of consonants=%d",consonants);
}
