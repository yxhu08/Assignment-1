//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int len1,len2;
	char temp[100];
	char concat[200];
	puts("enter string one");
	gets(str1);
	puts("enter string 2");
	gets(str2);
	len1=strlen(str1);
	len2=strlen(str2);
	strcpy(temp,str1);
	strcat(temp,str1);
	if(strstr(temp,str2)!=NULL && len1==len2)
	  printf("Rotation");
	else
	printf("not rotation");
	
	
}
