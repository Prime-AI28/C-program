// C program to calculate simple interest --> P*N*R/
#include <stdio.h>
void main()
{
    float p,n,r,s;
    printf("enter the principle amount : ");
    scanf("%f",&p);
    printf("enter the rate : ");
    scanf("%f",&r);
    printf("enter the time ");
    scanf("%f",&n);

    s = (p*n*r)/100;
    printf("Simple interst is %f",s);
}