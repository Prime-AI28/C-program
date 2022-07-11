#include<stdio.h>
void main()
{
    void *v_ptr;
    int i=100;
    v_ptr = &i;
    printf("\n i contains %d",*(int*)v_ptr);
    printf("\n i is contained in %u\n",v_ptr);
}