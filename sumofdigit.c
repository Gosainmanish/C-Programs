#include<stdio.h>
void main()
{
          int s=0,n;
          printf("enter the value of m:");
          scanf("%d",&n);
          while(n!=0)
          {
                    s=s+n%10;
                    n=n/10;
          }
          printf("\n SUM OF DIGITS = %d",s);
}


