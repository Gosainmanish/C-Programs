#include<stdio.h>
main()
{
          int x,y,z;
          printf("\nENTER THE VALUES OF x, y & z");
          scanf("%d%d%d",&x,&y,&z);
          printf("\n------BEFORE SWAPPING------");
          printf("\n x=%d",x);
             printf("\n y=%d",y);
             printf("\n z=%d",z);
          x=x+y+z;
          z=x-y-z;
          y=x-y-z;
          x=x-y-z;
          printf("\n----AFTER SWAPPING-----");
          printf("\n x=%d",x);
             printf("\n y=%d",y);
             printf("\n z=%d",z);
          return 0;
}
