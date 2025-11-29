//Q60 : Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main()
{
    int n, i,positive=0,negative=0,zero=0;
    printf("enter n");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("enter elements");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        positive++;
        if(arr[i]<0)
        negative++;
        if(arr[i]==0)
        zero++;
    }
    printf("number of positive elements=%d\n",positive);
    printf("number of negative elements=%d\n",negative);
    printf("number of zeroes=%d",zero);
}