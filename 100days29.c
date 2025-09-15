//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include<stdio.h>
main()
{
	int n,count,f=1;
	printf("enter n");
	scanf("%d",&n);
	count=n;
	while(count>=1)
	{
	 f=f*count;
	 count=count-1;}
	 printf("%d",f);
}
