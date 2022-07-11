#include<stdio.h>

void main()
{
    int *iptr; // pointer to an integer
    int **ptriptr; // pointer to int pointer
    int data; // some integer location
    iptr = &data; // iptr now points to data
    ptriptr = &iptr; // ptriptr points to iptr
    *iptr = 100; // same as data = 100
    printf("data now contains: %d\n", data);
    **ptriptr = 200; // same as data = 200
    printf("data now contains: %d\n", data);
    data = 300;
    printf("ptriptr is pointing now to : %d\n", **ptriptr);
}