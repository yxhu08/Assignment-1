Q58 : Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

#include <stdio.h>//without using extra library function
      int main()
{
    int n, i;
    printf("enter number of elements");
    scanf("%d", &n);
    int arr[i];
    for (i = 0; i < n; i++)
    {
        printf("enter elements");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
 int max=arr[0];
 int min=arr[0];
 for(i=0;i<n;i++)
 {
    if(arr[i]>max)
    max=arr[i];
    if(arr[i]<min)
    min=arr[i];
 }
 printf("largest element is %d",max);
 printf("smallest element is %d",min);
}