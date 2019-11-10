#include<stdio.h>
main()
{
          float i,s=0,n;
          printf("\n enter any number");
          scanf("%f",&n);
          printf("\n n=%f",n);
 for (i=1 ; i<=n ; i++)
 {        s=s+(1/i);
          if (i==1)
          printf("\n 1+");
          else if (i==n)
          printf("\n (1/%f)",i);
          else
          printf("\n (1/%f) +",i);

 }
 printf("\n The sum of the given series is %f",s);
return 0;
}
