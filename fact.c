#include<stdio.h>
fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

main()
{
    int m,v;
    printf("\n enter any number :");
    scanf("%d",&m);
        v=fact(m);
printf("\n FACTORIAL : %d ",v);
}
//This is a C Program for calculating factorial of a number
