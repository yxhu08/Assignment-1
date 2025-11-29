Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include<stdio.h>
void reverse(int arr[],int n)
{


    int i=0,j=n-1,temp;
    while(i<j){
     temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;}
    return;
}
int main()
{
    int n,i;
    printf("enter number of elements");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)

    {
        printf("enter elements");
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
    for(i=0;i<n;i++)
    {
    	printf("%d",arr[i]);
	}
}