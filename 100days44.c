//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include<stdio.h>
int main()
{
    int n,num,den,count;
    float sum=0.0;
    printf("enter number of digits");
    scanf("%d",&n);
    num=3;//remember to initialize num and den here by 3 and 4 bcz in first condition if statement is working we need to work from else statement for num and 
          // den 
    den=4;
    for(count=1;count<=n;count++){//need to write for statement here logically nit before else statement
	
    if(count==1)
    {
        sum+=1.0;
}
    else 
    {
        sum+=(float)num/den;
        num=num+2;
        den=den+2;
    }
}


    printf("sum of the series terms: %.2f",sum);//bcz need result upto 2 decimal places
}