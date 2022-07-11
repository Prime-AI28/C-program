#include<stdio.h>
void main()
{
    int *p, *q;
    printf("%d\n", q);
    printf("%d\n", p);

    q = p+1;
    printf("%d\n", q);
    printf("%d\n", p);
    printf("%d\n", q-p);
    /*
    float *f, *g;
    g = f+1;
    printf("%d\n", g-f);
    */
}