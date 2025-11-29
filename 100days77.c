//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include<stdio.h>
int main()
{
	int n,i,j,flag=1,diagonal[n];//bcz if a matrix is a diagnol matrix obviously it will have same number of rows and columns
	printf("enter size of a matrix");
	scanf("%d",&n);
	int a[n][n]; 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter elements");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		diagonal[i]=a[i][i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(diagonal[i]==diagonal[j])
			{
			flag=0;
			break;
		}
		}
		if(flag==0)
		break;
	}
	if(flag==1)
	printf("All the diagonal elements are  distinct");
	else
	printf("All the diagonal elements are not distinct");
	
}
