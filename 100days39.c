//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
main()
{
	int n,rem,m,product=1;
	printf("enter n");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		rem=n%10;
		 if(rem%2!=0)
		  {
		  	product=product*rem;
		  }
		 n=n/10;
	}
	printf("%d",product);
}
