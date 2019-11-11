#include<stdio.h>
void main()
{
        int n,i,j,a;

        printf("\n enter number");
        scanf("%d",&n);
a=n%10;
          for (i=1;i<=a;i++)
          {
                    for (j=i;j<a;j++)
                    {
                              printf("\t %d",j);
                    }
                    printf("\n");
          }
          return 0;
}

