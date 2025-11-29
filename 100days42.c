Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include<stdio.h>
int main()
{
int n,rem,num=0,count;
printf("enter a number");
scanf("%d",&n);
for(count=1;count<n;count++)

{
        if(n%count==0)
         num=num+count;
}
if(num==n)
printf("perfect number");
else
printf("not a perfect number");

}