//Q26: Write a program to print numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/
#include<stdio.h>
main()
{
	int n,count;
	printf("enter n");
	scanf("%d",&n);
	for(count=1;count<=n;count++)
	printf("%d\n",count);
	
}
