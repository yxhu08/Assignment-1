//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include<stdio.h>
main()
{
	int n,count,product;
	printf("enter n");
	scanf("%d",&n);
	count=2;
	while(count<=n){
	
	product=product*count;
	count=count+2;}
	printf("%d",product);
	
}
