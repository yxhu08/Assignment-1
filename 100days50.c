//Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)//i+j=n here spaces are denoted by j
        {
            printf(" ");
        }
    
for(k=i;k>=1;k--)
{
    printf("*");
}
printf("\n");
}
}