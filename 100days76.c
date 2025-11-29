//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include<stdio.h>
int main()
{
	int i,j,row,col,flag=1; //flag=1 here is used to show true condition
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
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]!=a[j][i]){
			flag=0;
			break;}
		}
		if( flag ==0)
		break;
	}
	if(flag==1)
	printf("Matrix is a symmetric matrix");
	else
	printf("Matrix is not a symmetric matrix");
}
	
		
		
