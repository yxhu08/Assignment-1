//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
main()
{
	int rem,n,m;
	printf("enter n");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		rem=n%10;
		 if(rem==0)
		  printf("1");
		else if(rem==1)
		 printf("0");
		n=n/10;
	}
}
