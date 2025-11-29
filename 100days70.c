//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include<stdio.h>
void reverse( int arr[],int si,int ei)
{
int i,j,temp;
for(i=si,j=ei;i<j;i++,j--)
{
	 temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
return;
}
int main()
{
	int i,j,n,k;
	printf("enter number of elements in an array");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("enter elements:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("the elements of an array:%d\n",arr[i]);
	}
	printf("enter number of rotations");
	scanf("%d",&k);
	k=k%n;
//	reverse(arr,0,n-1);//reversing whole array
	reverse(arr,0,k-1);//reversing  array from 0 to k-1 index
//	reverse(arr,k,n-1); //reversing an array from k to n-1 index 
	for(i=0;i<n;i++)
	{
		printf("Rotated array is :%d\n",arr[i]);	
		}
}
