Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {printf("*");
    }
    for(j=2;j<=n;j+=2)
    {
        for(count=1;count<=3;count++)
        printf("*\n");
    }
    for(k=3;k<=n;k+2)
    {
        for(count=1;count<=5;count++)
         printf("*\n");
    }
}