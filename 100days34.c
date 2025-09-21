//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Notprime 

*/
main()
{
	int n,count;
	
	 printf("enter n");
    	scanf("%d",&n);
	for(count=1;count<=n/2;count++)
	 if(n%count==0){
	 
	  printf("factor=%d",count);}
	  {
	  	printf("factor=%d",n);
	  }
	  if(count==1){
	  
	   
	   printf("Prime no.");}
	 else 
	   
	  {
	   printf("composite no.");}
	  
	 
}
