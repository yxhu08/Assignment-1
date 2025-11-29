//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include<stdio.h>
#include<math.h>
int main()
{
 long n,m,swappednumber;
 int digits,last,first;
 printf("enter a number");
 scanf("%ld",&n);
 m=n;
 if(m>0)
 {
    last=m%10;//gives last digit of the number
 //counting the number of digits in a number
    digits=log10(m);//mathematically total number of digits=[log10(digits)]+1
    first=m/pow(10,digits);// gets first number just think mathematically
    swappednumber=last*pow(10,digits)+((m%(int)pow(10,digits))/10)*10+first;
    
}
printf("%d",swappednumber);
}