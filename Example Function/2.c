#include<stdio.h>

int max( int num1, int num2);

int max(int num1, int num2)
{
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);

    int ret;
    ret = max(a,b);

    printf ("Max value is: %d\n", ret);

    return 0;

}