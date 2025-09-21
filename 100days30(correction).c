//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
main()
{
	int reversed=0,n,rem;
	printf("enter n");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		reversed=reversed*10+rem;
		n=n/10;

	}
	printf("reversed no. =%d\n",reversed);
}
