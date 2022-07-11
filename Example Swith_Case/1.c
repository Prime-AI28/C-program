#include <stdio.h>
void main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);

    printf("\n Menu");
    printf("\n 1. Addition");
    printf("\n 2. Subtraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    printf("\n Enter your choice ... ");

    scanf("%d", &c);

    switch (c)
    {
    case 1:
        int add = a + b;
        printf("\n%d", add);
        break;
    case 2:
        int sub = a - b;
        printf("\n%d", sub);
        break;
    case 3:
        int mul = a * b;
        printf("\n%d", mul);
        break;

    case 4:
        if (b != 0)
        {
            int div = a / b;
            printf("\n%d", div);
        }
        else
        {
            printf("Invalid Input");
        }
        break;

    default:
        break;
    }
}