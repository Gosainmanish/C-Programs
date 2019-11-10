#include<stdio.h>
void main()
{
          int n=0,positive=0,negative=0;
          printf("\n type 0 to count numbers");
          do
{  printf("\n enter any number=");
scanf("%d",&n);
          if (n>0)
                   (positive++);
          if (n<0)
          (negative++);
}
          while (n!=0);
          printf("\n===OUTPUT===");
printf("\n From the input numbers,\n%d are postive, and\n %d are negative",positive, negative);
return 0;
}



