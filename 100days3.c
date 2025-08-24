//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>
main()
{

float l,b,area,perimeter;
int ch;
printf("enter l,b");
scanf("%f%f",&l,&b);
printf("enter your choice 1.area of rectangel\n 2.perimeter of rectange\n");
scanf("%d",&ch);
if(ch==1)
  area=l*b;
  printf("%f",area);
if(ch==2)
  perimeter=2*(l+b);
  printf("%f",perimeter);}
