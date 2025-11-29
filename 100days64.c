Q64 : Find the digit that occurs the most times in an integer number.

      /*
      Sample Test Cases:
      Input 1:
      112233
      Output 1:
      1

      Input 2:
      887799
      Output 2:
      7

      */
#include<stdio.h>
int main()
{long long num;
    int count[10]={0}//stores frequency of digit
    int digit,maxDigit=0,maxcount=0;
    printf("enter the number");
    scanf("%lld",&num);
    if(num<0)
    num=-num;
    while(num>0){
        digit=num%10;
        count[digit]++;
        num/=10;
    }
    for(int i=0;i<10;i++)
    {
        if(count[i]>maxcount){
            maxcount=count[i];
            maxDigit=i;
        }
    }
    printf("the digit that occurs the most is %d",maxDigit);


}