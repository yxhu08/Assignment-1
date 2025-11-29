//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include<stdio.h>
int main ()
{
	int n,key;
	printf("enter number of elements in an array");
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		printf("enter elements");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("elements of an array are:%d\n",arr[i]);
	}
	int pos,item;
	printf("enter pos of element");
	scanf("%d",&pos);
	printf("enter element to be inserted");
	scanf("%d",&item);
	for(i=n;i>pos;i--) //shift elements right
	{
		arr[i]=arr[i-1];
	}
	arr[pos]=item;//insertion of item
	n++;
	printf("Array after insertion:\n");//prinitng array after inserion of item
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
}
