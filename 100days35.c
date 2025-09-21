//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
#include<stdio.h>
main()
{
	int n,count;
	printf("enter n");
	scanf("%d",&n);
	for(count=0;count<=n/2;count++)
	if(n%count==0)
	{
	 printf("factor=%d",count);
	 }
	{
	  printf("factor=%d",n);
	  }
}
