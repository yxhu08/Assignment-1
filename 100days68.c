//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include<stdio.h>
int main()
{
	int n;
	printf("enter n");
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		printf("enter elemets of  an array:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	max=arr[0];
	for(index=0;index<n;index++){
	
	if(arr[index>max] )
	{
		max=arr[index];
	}
	printf("largest element is:%d",max);
	secondlargest=arr[0];
	for(index=0;index<n;index++)
	{
		if(arr[index]>secondlargest && arr[index]<max)
		secondlargest=arr[index];
	}
	printf(" second largest element is:%d",secondlargest);
}
