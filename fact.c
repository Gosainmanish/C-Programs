#include<stdio.h>
void main()
{
          int kfact=1,k,m;
          printf("enter the value of m:");
          scanf("%d",&m);
          printf("\n==========FACTORIAL========");
          for (k=1;k<=m;k++)
          {
                    kfact=kfact*k;
                    printf("\n %d! = %d",k,kfact);
          }


}

