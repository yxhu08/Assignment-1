//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include<stdio.h>
main()
{

int n,sum=0,count;
printf("enter n");
scanf("%d",&n);
for(count=0;count<=n;count++)
  sum=sum+count;
  printf("%d",sum);
}
