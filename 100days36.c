//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
main()
{
	int x,y,divisor,dividend,rem;
	printf("enter x,y");
	scanf("%d%d",&x,&y);
	if(x>y)
	{
		dividend=x;
		divisor=y;
	}
	else
	{ dividend=y;
	  divisor=x;
	}
	while(dividend%divisor!=0)
	{
		rem=dividend%divisor;
		dividend=divisor;
		divisor=rem;
	}
	printf("HCF=%d",rem);
}
