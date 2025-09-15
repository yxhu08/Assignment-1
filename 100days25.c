//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include<stdio.h>
main()
{
	int a,b,ch,c;
	printf("enter a,b");
	scanf("%d%d",&a,&b);
	printf("enter your choice\n\t 1.Add\n\t 2.Subtract\n\t 3.Product\n\t 4.Division\n\t 5.Remainder");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		c=a+b;
		printf("Add=%d",c);
	    break;
	case 2:
		c=a-b;
		printf("Subtract=%d",c);
		break;
	case 3:
		c=a*b;
		printf("Product=%d",c);
		break;
	case 4:
		c=a/b;
		printf("Division=%d",c);
		break;
	case 5:
		c=a%b;
		printf("Remainder=%d",c);
		break;}
		
	
	
}
