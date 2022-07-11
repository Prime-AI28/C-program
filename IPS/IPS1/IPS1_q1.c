#include <stdio.h>

void main()
{
    float pi = 3.1415926;
    float r, V;
    scanf("%f", &r);
    if (r>0)
    {
    V = (4 * pi * r*r*r)/3;
    printf("%f", V);
    }
    else
    printf("Invalid Input");
}