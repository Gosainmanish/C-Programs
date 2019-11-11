#include<stdio.h>
void main()
{
          int m,n;
          printf("\n enter the value of m & n");
          scanf("%d%d",&m,&n);
          if (n%m==0)
     printf("\n %d is multiple of %d",n,m);
     else
     printf("\n %d is not multiple of %d",n,m);
          return 0;
}
