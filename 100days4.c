//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include<stdio.h>
main()
{

float r,area,circumference;
int ch;
printf("enter r");
scanf("%f",&r);
printf("enter your choice 1.area\n, 2.circumference\n");
scanf("%d",&ch);
if(ch==1)
  area=3.14*r*r;
  printf("%f",area);
if(ch==2)
   circumference=2*3.14*r;
   printf("%f",circumference);
}



