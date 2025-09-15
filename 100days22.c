//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include<stdio.h>
main()
{
	int CP,SP,z,p,l;
	printf("enter SP,CP");
	scanf("%d%d",&SP,&CP);
	z=SP-CP;
	if(z>0)
	{
	
	 p=(z/CP)*100;
	 printf("Profit =%d",p);
}
    else if  (z<0){
	
	 l=(z/CP)/100;
	 printf("loss = %d",l);
}
	else
	 printf("no profit no loss");
	 
	
}
