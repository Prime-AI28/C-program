#include<stdio.h>

int main()
{
    int start, end, divisor, temp;
    float terms, sum;
    scanf("%d", &start);
    scanf("%d", &end);
    scanf("%d", &divisor);
    if (start>0 && start<= 500 & end >= 0 && end<=1000 & end>start && divisor>0)
    {
        temp = start;
        sum =0;
        while (temp<=end)
        {
            if (temp % divisor == 0)
            {
                printf("%d\n", temp);
                sum = sum + temp;
            }
            else
            {
                printf("");
            }
            temp = temp + 1;
        }
        printf("%.0f",sum);
    }
    else
    {
        printf("invalid");
    }
    return 0;
}