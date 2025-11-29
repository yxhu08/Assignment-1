//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include<stdio.h>
int main()
{
	int n,i,j,ele;
	printf("enter size of the matrix");
	scanf("%d",&n);
	int a[n][n],c[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter elements");
			scanf("%d",&a[i][j]);
		}
	}
	int b[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter elements");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		 c[i][j]=0;
			for(ele=0;ele<n;ele++)
			{
			c[i][j]+=a[i][ele]*b[ele][j];
		}
		printf("%d",c[i][j]);
		printf("\t");
		}
		printf("\n");
	}
}
