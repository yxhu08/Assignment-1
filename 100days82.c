//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include<stdio.h>
#include<string.h>
int main()
{ 
     int count=0;
     char str[50];
     printf("enter a string");
     fgets(str,sizeof(str),stdin);
     str[strcspn(str,"\n")]= '\0';
     while (str[count]!='\0')
     {
     	printf("%c\n",str[count]);
     	count++;
	 }

     
	
}
