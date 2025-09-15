//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include<stdio.h>
main()
{
	int a;
	printf("enter a");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("January,no. of days=31");
	    	break;
		case 2:
			printf("February");
			int b;
			printf("enter b");
			scanf("%d",&b);
			if(b%4==0&&b%100!=0||b%400==0)
			 printf("no. of days=29");
			else
			  printf("no. of days=28");
	    	break;
		case 3:
			printf("march, no. of days=31");
	    	break;
		case4:
			printf("april , no. of days=30");
	    	break;
		case5:
			printf("may, no. of days=31");
	    	break;
		case6:
			printf("june, no. of days=30");
	    	break;
		case7:
			printf("july, no. of days=31");
	    	break;
		case8:
			printf("august, no. of days=31");
	    	break;
		case9:
			printf("september, no. of days=30");
	    	break;
		case10:
			printf("october,no. of days=31");
	    	break;
		case11:
			printf("november, no. of days=30");
		    break;
		case12:
			printf("december,no. of days=31");
	    	break;
			
	}
}
