// Q51: Write a program to print the following pattern:
5 45 345 2345 12345

    /*
    Sample Test Cases:
    Input 1:

    Output 1:
        5
       45
      345
     2345
    12345

    */

#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>=1;j--)//i+j=n here spaces are denoted by j
        {
            printf(" ");
        }
    
for(k=n-i+1;k<=n;k++)//here i have seen ki after printing j like in first line 1234 i have 5 ask in second line 123 then k as 45 soo each time i am having
                    //my k =1 from previous j so used this logic.
{
    printf("%d",k);
}
printf("\n");
}
}