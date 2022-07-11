#include <stdio.h>
int main()
{ 
    int N1, N2, i ,k ;
    scanf("%d %d", &N1,&N2);
    k = N2;
     while (k>=N1) 
     { 
        for (i=N1; i <= k; i++)
        { 
            printf("%d ", i);
        }
        printf("\n");
        k--;
    }
}