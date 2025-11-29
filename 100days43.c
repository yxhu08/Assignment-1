//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include<stdio.h>
int main()
{
	int n,rem,m,count,result=0,sum;
	printf("enter n");
	scanf("%d",&n);
	m=n;
	while(m>0)
	{
		rem=m%10;
		count=1;
		sum=1;//reset sum for each digit
		
			while(count<=rem)
			{
				sum=count*sum;
				count++;}
				result=result+sum;
				
				
			
			m=m/10;
		}
		if(result==n)
		 printf("strong number");
		else
		  printf("not a strong number");
		
	}