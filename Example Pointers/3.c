#include<stdio.h>
void main()
{
    int *iptr,a,b;
    iptr = &a;
    *iptr = 25;
    *iptr +=10;
    b = *iptr;
    printf("\n %p \n %d \n %p ",iptr,a,&b);
}