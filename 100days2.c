//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>
main()
{

int a,b,sum,diff,product,quotient,ch;
printf("enter a,b");
scanf("%d%d",&a,&b);
printf("enter your choice 1.sum\n 2.diff\n 3.product\n 4.quotient\n");
scanf("%d",&ch);
if(ch==1)
 {
   sum=a+b;
  printf("%d",sum);}
if(ch==2)
 {
   diff=a-b;
  printf("%d",diff);}
if(ch==3)
  {
  product=a*b;
  printf("%d",product);}
if(ch==4)
  {
  quotient=a/b;
  printf("%d",quotient);}
else{

  printf("wrong choice");}
}

