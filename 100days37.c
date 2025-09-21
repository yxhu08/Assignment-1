//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

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
	{
		dividend=y;
		divisor=x;
	}
	while(dividend%divisor!=0)
	{
		rem=dividend%divisor;
		dividend=divisor;
		divisor=rem;
		
	}
	printf("LCM=%d",(x*y)/divisor);
}
