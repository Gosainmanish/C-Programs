#include<stdio.h>
void main()
{
          int i,j,a=1,n;

          printf("\n enter value of n:");
          scanf("%d",&n);

         for(i=0;i<=n;i++)
 {
  for(j=1;j<i;j++)
  {
         if((i+j)%2==0)
         {
    printf("0");
         }
   else
   {
    printf("1");
   }
  }
 printf("\n");
 }
getch();
}
