#include<stdio.h>
#define MAX 180
#define LOW 0
#define PI 3.14
void main()
{

          float x,y=0,a,b;
          printf("\nANGLE\t\tsin(x)\t\tcos(x) ");
          for (y=LOW;y<=MAX;y+=15)
{         x=(PI/MAX)*y;
a=sin(x);
       b=cos(x);
          printf("\n%f\t%f\t%f",y,a,b);
          }
}
