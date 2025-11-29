#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	int i,j;
	int k=0;
	int size=0;
	char reversed[40];
	char temp;
	puts("enter a string");
	gets(str);
	while(str[k]!='\0')
	{
		size++;
		k++;
	}
	strcpy(reversed,str);
	for(i=0,j=size-1;i<=j;i++,j--)
	{
		temp=reversed[i];
		reversed[i]=reversed[j];
		reversed[j]=temp;
		
	}

	if( strcmp(reversed,str)==0 ) //here don't use reversed[40]==str[40] bcs these toh we have already declared to be equal so this statement will always be true and will give
	//palindrome but we have made changes using i and j
	printf("palindrome string");
	else
	printf("not a palindrome string");
}
