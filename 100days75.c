//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include<stdio.h>
int main()
{
	int i,j,row,col;
	printf("enter number of rows");
	scanf("%d",&row);
	printf("enter number of columns");
	scanf("%d",&col);
	int a[row][col];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter number of elements");
			scanf("%d",&a[i][j]);
		}
	}
	int b[row][col];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter elements");
			scanf("%d",&b[i][j]);
		}
	}
	int c[row][col];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
}
