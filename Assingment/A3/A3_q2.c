#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, c;
    scanf("%d", &n);
    if (n >= 1)
    {
        int val[n];
        int vc[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &val[i]);
            if (val[i] < 0)
            {
                c = 4;
            }
        }
        if (c > 0)
        {
            printf("Invalid Input");
            _Exit(0);
        }
        vc[0] = val[0] * val[1];
        vc[n - 1] = val[n - 2] * val[n - 1];
        for (int j = 1; j < n - 1; j++)
        {
            vc[j] = val[j - 1] * val[j + 1];
        }
        for (int k = 0; k < n; k++)
        {
            printf("%d\n", vc[k]);
        }
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}