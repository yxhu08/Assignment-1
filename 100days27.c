//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include<stdio.h>
main()
{
	int sum=0,count,n;
	printf("enter n");
	scanf("%d",&n);
	count=1;
	while(count<=n){
	
	 sum=sum+count;
	count=count+2;}
	printf("%d",sum);
}
