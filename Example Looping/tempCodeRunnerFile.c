// factorial of a given no. using for loop
// While (start/initialization; conditionin;increment/decrement)
#include <stdio.h>
void main()
{
    int n, fact = 1, i;
    scanf("%d", &n);

    if (n == 0)
    {
        fact = 1;
        printf("%d", fact);
    }

    else if (n > 0)
    {
        while (i <= n)
        {
            fact *= i;
            i++;
        }
        printf("%d", fact);
    }

    else
    {
        printf("Invalid input");
    }
}