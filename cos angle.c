#include<stdio.h>
#include<math.h>
#define MAX 180
#define LOW 0
#define PI 3.14
void main()
{
          float x,y;
          int angle=0;
          printf("\n ANGLE\tCos(Angle)");
          while (angle<=MAX)
          {
                    x=(PI/MAX)*angle;
                    y=cos(x);
                    printf("\n %d\t%f",angle,y);
                    angle=angle+10;
          }
}
