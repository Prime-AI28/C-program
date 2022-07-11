#include<stdio.h>
void main()
{
    int *iptr;
    int a=10;
    iptr=&a;
    printf("\n Address of var a = %u and %p",&a,iptr);
}