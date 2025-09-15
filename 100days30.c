//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include<stdio.h>
main()
{
	int a,b,c,d,temp;
	printf("enter a,b,c,d");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	{
		temp=a;
		a=d;
		d=temp;
		temp=b;
		b=c;
		c=temp;
		
	}
	printf("%d%d%d%d",&a,&b,&c,&d);
	
	
}
