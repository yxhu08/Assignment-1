//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
main()
{
	int rem,n,sum=0,m;
	printf("enter n");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	printf("%d",sum);
}

