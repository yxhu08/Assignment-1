Q63 : Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
      int main()
{
    int n, i, x;
    printf("enter n,x");
    scanf("%d%d", &n, &x);
    int a[n], b[x];
    for (i = 0; i < n; i++)
    {
        printf("enter elements");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < x; i++)
    {
        printf("enter elements");
        scanf("%d", &b[i]);
    }
    int c[n + x];
    for (i = 0; i < n + x; i++)
    {
        if (i < n)
            c[i] = a[i];
        else
            c[i] = b[i - n];
    }
    printf("%d", c[i]);
}
