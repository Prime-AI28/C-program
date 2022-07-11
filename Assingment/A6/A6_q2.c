#include <stdio.h>
#include <stdlib.h>
int armstrong(int n);
int prime(int n);
int perfect(int n);
int main()
{
    int num;
    scanf("%d", &num);
    if (num > 0)
    {
        prime(num);
        armstrong(num);
        perfect(num);
    }
    else
    {
        printf("invalid");
        exit(0);
    }
    return 0;
}
int prime(int n)
{
    int k = 1;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
            k++;
        if (k > 2)
            break;
    }
    if (k == 2)
        printf("%d is Prime number\n", n);
    else
        printf("%d is not Prime number\n", n);
    return 0;
}
int armstrong(int n)
{
    int x, sm, y = n;
    while (n > 0)
    {
        x = n % 10;
        sm = sm + (x * x * x);
        n = n / 10;
    }
    if (sm == n)
        printf("%d is Armstrong number\n", y);
    else
        printf("%d is not Armstrong number\n", y);
    return 0;
}
int perfect(int n)
{
    int k = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            k = k + i;
    }
    if (k == n)
        printf("%d is Perfect number\n", n);
    else
        printf("%d is not Perfect number\n", n);
    return 0;
}