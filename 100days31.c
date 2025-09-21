//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
main()
{
	int n,rem,reversed=0,temp,y,x;
	printf("enter n");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%2;
		{
		if(rem==0)
		 printf("0",temp);
		   else 
		     printf("1",temp);}
		y=temp;
		n=n/2;
	}
	
		printf("%d",y);
		while(y>0)
	
{
		x=y%10;
	reversed=reversed*10+x;
	y=y/10;
}
	printf("%d\n",reversed);
}
