//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char date[15];
	char month[10];
	int mm; //will be used in extracting the month like 04 
	puts("enter date");
	gets(date);
	mm=(date[3]-'0')*10 + (date[4]-'0'); //here we are using ASCII value concept basically here at 3 suppose there will something and its ascii value will be something - ascii value of 
	// 0 which 48 then *10 because within the brackets it could be just 1 so 1*10 will get 10 which will denote october so this is basically the concept here
	switch(mm)
	{
		case 1: strcpy(month,"Jan");
		break;
		case 2: strcpy(month,"Feb");
		break;
		case 3: strcpy(month,"Mar");
		break;
		case 4: strcpy(month,"Apr");
		break;
		case 5: strcpy(month,"May");
		break;
		case 6: strcpy(month,"June");
		break;
		case 7: strcpy(month,"July");
		break;
		case 8: strcpy(month,"Aug");
		break;
		case 9: strcpy(month,"Sep");
		break;
		case 10: strcpy(month,"Oct");
		break;
		case 11: strcpy(month,"Nov");
		break;
		case 12: strcpy(month,"Dec");
		break;
		default: strcpy(month,"Invalid");
	}
	printf("%.2s-%s-%.4s",date,month,date+6); // here initially i will be discussing why i have used date+6 because date will point to the address of first character within the date
	// and we need to print here 4 characters.4s which is for year so +6 will point to the address where year is stored now talking about .2s mean it means first two characters within
	//the stringand %s for whole month string.
}
