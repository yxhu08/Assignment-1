//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include<stdio.h>
  int main()
{
    int n, i, found=0,item;
    printf("enter n");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("enter elements");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
  printf("enter the item to be found ");
  scanf("%d",&item);
  for(i=0;i<n;i++)
  {
    if(arr[i]==item)
    {
	
    printf("element found at %d",i+1);
    found=1;
    break;
  }
}
  if(!found)
  printf("element not found in the array");
}