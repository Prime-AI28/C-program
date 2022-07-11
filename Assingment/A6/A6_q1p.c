#include <stdio.h>
#include <stdlib.h>
int maximum(int ary[], int index, int len);
int minimum(int ary[], int index, int len);

int main()
{
    int size, element, j = 0, max, min;
    scanf("%d", &size);
    int *arr;
    if (size > 0)
    {
        arr = malloc(size * sizeof(int));
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &element);
            if (element > 0)
            {
                arr[j] = element;
                j++;
            }
            else
            {
                printf("invalid");
                exit(0);
            }
        }
        max = maximum(arr, 0, size);
        min = minimum(arr, 0, size);

        printf("%d\n", min);
        printf("%d\n", max);
    }
    else
    {
        printf("invalid");
        exit(0);
    }
}

int maximum(int ary[], int index, int len) // [33 11 99 22 44 ] 0 5
{
    int max;
    if (index >= len - 2) // 5-2 = 3
    {
        return (ary[index] > ary[index + 1]) ? ary[index] : ary[index + 1];
    }
    max = maximum(ary, index + 1, len);
    return (ary[index] > max) ? ary[index] : max;
}

int minimum(int ary[], int index, int len)
{
    int min;
    if (index >= len - 2)
    {
        return (ary[index] < ary[index + 1]) ? ary[index] : ary[index + 1];
    }
    min = minimum(ary, index + 1, len);
    return (ary[index] < min) ? ary[index] : min;
}