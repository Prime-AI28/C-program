#include <stdio.h>

int findSubArray(int arr[], int n)
{
    // Execute this loop through by array length
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        // Inner loop from i+1 to n
        for (int j = i + 1; j <= n; ++j)
        {
            int min;

            min = arr[0];
            for (int u = i; u < j; ++u)
            {
                if (arr[u] < min)
                {
                    min = arr[u];
                }
            }
            count = count + min;
        }
    }
    printf("%d", count);
}
int main()
{

    int k;
    int arr[k];
    scanf("%d", &k);
    for (int p = 0; p < k; p++)
    {
        scanf("%d", &arr[p]);
    }

    findSubArray(arr, k);
}