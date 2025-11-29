//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

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
			printf("enter elements");
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<col;j++)
	{
		for(i=0;i<row;i++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
