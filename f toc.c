#include<stdio.h>
#define MAX 250
void main()
{
        float f=0,c;
          printf("\n Fahrenheit\tCelsius");



          while (f<=MAX)
          {

                     c=(f-32)/1.8;
                    printf("\n %f\t%f",f,c);
                    f=f+25;
          }
}




