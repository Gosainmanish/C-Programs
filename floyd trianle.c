#include<stdio.h>
void main()
{
          int i,j,n,a=1;

          printf("\n enter the number of rows:");
          scanf("%d",&n);

          for (i=1;i<=n;i++)
      {   for(j=1;j<i;j++)
          {
                    printf("%d\t",a);

          }
            printf("\n");
      }

}
