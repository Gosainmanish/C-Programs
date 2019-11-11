#include<stdio.h>
void main()
{
          float Pur,yr,sv,dep;
          printf("\n enter the purchase price of item =");
          scanf("%f",&Pur);
          printf("\n enter the year of service of item =");
          scanf("%f",&yr);
          printf("\n enter the depreciation in item =");
          scanf("%f",&dep);
       sv=Pur-(dep*yr);
 printf("\n -----------------------------------------");
                printf("\n PURCHASE PRICE = %f",Pur);
                    printf("\n ANNUAL DEPRECIATION = %f",dep);
                 printf("\n YEARS OF SERVICE =%f",yr);
printf("\n SALVAGE VALUE = %f",sv);
return 0;
}

