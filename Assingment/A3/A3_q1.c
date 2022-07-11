#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n>0)
    {
        int a[n];
        for (int i=0; i<n;i++)
        {
            scanf("%d", &a[i]);
        }
        for(int t=0; t<n; t++)
        {
            if(a[t]<0)
            {
                printf("invalid");
                _Exit(0);
                break;
            }
        }
        int temp=0;
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                if (a[j]>a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
        /*
        for (int i=0; i<n; i++)
        {
            printf("%d ", a[i]);
        }
        */
        if (n%2 == 0)
        {
            for(int i=0; i<(n/2); i++)
            {
                printf("%d ", a[i]);
                printf("%d ", a[n-i-1]);
            }
        }
        if (n%2 != 0)
        {
            for(int i=0; i<(n/2); i++)
            {
                printf("%d ", a[i]);
                printf("%d ", a[n-i-1]);
            }
            printf("%d", a[(n-1)/2]);
        }
    }
    else
    printf("invalid");
    return 0;
}