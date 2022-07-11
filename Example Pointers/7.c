#include<stdio.h>

int main()
{
    float *fptr;
    float myint;
    fptr = &myint;
    printf("%u",&fptr);
}