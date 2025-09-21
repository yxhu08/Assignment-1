//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
main()
{
	int rem,n,m,reversed=0;
	printf("enter n");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		rem=n%10;
		reversed=reversed*10+rem;
		n=n/10;
		
	}
    
	if(reversed==m){
	
     printf("palindrome no.");}
    else
    {
	
     printf("not a palindrome no.");}
	
}
