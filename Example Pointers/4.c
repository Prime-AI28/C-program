#include<stdio.h>
void swap(int*d1, int*d2)
{
    int temp;
    temp = *d1;
    *d1 = *d2;
    *d2 = temp;
}
void main()
{
    int a=5,b=8;
    printf("\n Before Swap a = %d, b=%d", a,b);
    swap(&a,&b);
    printf("\n After Swap a = %d, b=%d", a,b);
}