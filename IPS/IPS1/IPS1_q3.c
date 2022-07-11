#include <stdio.h>
int main()
{
    int N1, N2, i ,k ;
    scanf("%d %d", &N1,&N2);
    i = 1;
    k = N1;
    for(i; N1 <= N2; i++)
    {
        for (k; k<= N2; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
        N2--;
    }
}