// Usage of different Operators

#include<stdio.h>

void main()
{
    int v,a,b;
    scanf("%d",v);
    printf("%d\n",v); // intial value of V
    v += 3;
    printf("%d\n",v);
    a = ++v;
    b = v++;

    printf("%d\n",a);
    printf("%d\n",b);
}