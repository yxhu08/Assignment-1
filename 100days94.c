//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char sentence[100];
	char word[50],longest[50];
	int i=0,j=0,maxlen=0,len=0;
	puts("enter a string");
	gets(sentence);
	while(sentence[i]!='\0')
	{
		if(sentence[i]!=' ' && sentence[i]!='\t')
		{
		word[j++]=sentence[i];
	}
		else
		{
			word[j]='\0';
	
	         len = strlen(word);
	         if(len>maxlen)
	         {
	         	maxlen=len;
	         	strcpy(longest,word);
			 }
			 j=0;
		
	}
	i++;
}
word[j]='\0'; //bcz last word of the sentence does not end with space and above we are using else statement when space arrives after the word so checking the last word here
len=strlen(word);
if(len>maxlen){
	strcpy(longest,word);
}
printf("longest word:%s\n",longest);
printf("length:%d\n",strlen(longest));
}
