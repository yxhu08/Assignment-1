//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
main()
{
	int a,ch;
	printf("enter a");
	scanf("%d",&a);

	switch(a)
{
	case 1:
		printf("monday");
	break;
	case 2:
		printf("tuesday");
	break;
	case3:
		printf("wednesday");
	break;
	case4:
		printf("thursday");
	break;
	case5:
		printf("friday");
	break;
	case6:
		printf("saturday");
	break;
	case 7:
		printf("sunday");
	break;
	default:
		printf("wrong choice");}
	     
	
}
