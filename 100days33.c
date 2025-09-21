//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
main()
{
	int n,rem,sum=0,m,digits=0,temp;
	printf("enter n");
	scanf("%d",&n);
	
	
		
	temp=n;
		while(temp>0)
		{
			digits++;
			temp=temp/10;
		
		}
		m=n;
	while(n>0)
	{ 
		rem=n%10;
	
			sum=sum+pow(rem,digits);
			n=n/10;
		
		
	}
	if(sum==m)
	 printf("amrstrong no.");
	else
	 printf("not armstrong");
}

