#include<stdio.h>
void main()
{
          int n,reverse=0;
          printf("\n enter any integer number:");
          scanf("%d",&n);
          while(n!=0)
          {
                    reverse=reverse*10;
                    reverse=reverse+n%10;
                    n=n/10;
          }
          printf("\n %d",reverse);
}
