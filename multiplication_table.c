#include<stdio.h>
main()
{ int a,n=0,b;
printf("enter a number : ");
scanf("%d",&a);
          while (n<10)
          { n++;
b=a*n;
                printf("\n %d*%d=%d",a,n,b);
          }
          return 0;
}

