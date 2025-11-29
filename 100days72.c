//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include<stdio.h>
int main()
{
	int i,j,row,col,sum=0;
	printf("enter number of rows:");
	scanf("%d",&row);
	printf("enter columns");
	scanf("%d",&col);
	int a[row][col]; //remember to declare the array index as number of rows and columns  u have taken as input
	for(i=0;i<row;i++) //just take i and j supporting variables and apply conditions on the index variables such as rows and columns
	{
		for(j=0;j<col;j++)
		{
			printf("enter number of elements");
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				sum+=a[i][j];
			}
		}
		printf("%d",sum);
	}
	
