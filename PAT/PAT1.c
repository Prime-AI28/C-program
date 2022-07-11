#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100], n, temp, arrf[100];
    int i, j, k;
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("invalid");
        _Exit(1);
    }
    for (i = 0; i < n-1; i++)
    {
        scanf("%d  ", &arr[i]);
    }
    for (i = 0; i < n-1; i++)
    {
        if (arr[i] <= 0)
        {
            printf("invalidf");
            _Exit(0);
        }
    }
    for (j = 0; j < n - 1; j++)
    {
        for (k = j + 1; k < n; k++)
        {
            if (arr[j] == arr[k])
            {
                for (temp = k; temp < n - 1; temp++)
                {
                    arr[temp] = arr[temp + 1];
                }
                n=n-1;
                k = k - 1;
            }
        }
    }
    for (int x = 0; x < n-1; x++)
    {
        printf("%d\n", arr[x]);
    }
    return 0;
}