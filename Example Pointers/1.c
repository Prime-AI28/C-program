#include<stdio.h>
void main()
{
    int a=100;
    int b=200;
    printf("\n Address: %u contains value: %d",&a,a);
    printf("\n Address: %u contains value: %d",&b,b);
    printf("\n Address: %p contains value: %d",&a,a);
    printf("\n Address: %p contains value: %d",&b,b);
}