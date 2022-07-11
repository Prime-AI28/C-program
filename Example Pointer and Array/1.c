#include<stdio.h>
 void main()
 {
    int iarrray[5] = {1,2,3,4,5};
    int i, *ptr;
    ptr = &iarrray[0]; // assigning tha base address
    for(i=0; i<5;i++)
    {
        printf("\n %u - %d", ptr, *ptr);
        ptr++;
    }
 }