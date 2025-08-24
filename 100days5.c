//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
//Here for farenhite i have taken F and for degree celcius C
#include<stdio.h>
main()
{

int C;
float F;
printf("enter C");
scanf("%d",&C);
F=(9/5*C)+32;
printf("%f",F);
}

