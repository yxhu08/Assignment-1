//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include<stdio.h>
int main(){
	int i,j,a[i][j],row,col;
	printf("enter number of rows");
	scanf("%d",&i);
	printf("enter number of columns");
	scanf("%d",&j);
	for(row=1;row<=i;row++)
	{
		for(col=1;col<=j;col++)
		{
			printf("enter elements:");
			scanf("%d",&a[row][col]);
		}
	}
	for(row=1;row<=i;row++)
	{
		for(col=1;col<=j;col++)
		{
			printf("%d",a[row][col]);
		}
		printf("\n");
	}
}
