//Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
main()
{

int x;
printf("enter x");
scanf("%d",&x);
if(x>90)
 printf("A+ grade");
else if(x>80)
 printf("A grade");
else if(x>70)
 printf("B grade");
else if(x>60)
 printf("C grade");
else if(x>50)
  printf("D grade");
else
  printf("F grade");
}
