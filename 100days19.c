//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
main()
{
	int a,b,c;
	printf("enter a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&a==c)
	  printf("equilateral triangle");
	else if(a==b&&a!=c|| b==c && c!=a)
	  printf("isosceles triangle");
	else if(a!=b && a!=c && b!=c)
	  printf("scalene triangle");
	else 
	  printf("not a triangle ");
}
