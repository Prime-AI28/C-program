#include <stdio.h>

int main()
{
    float C, F;
    scanf("%f", &C);
    if (C>0)
    {
    F = (C*(9.0/5.0))+32;
    printf("%f", F);
    }
    else
    printf("invalid");
    return 0;
}