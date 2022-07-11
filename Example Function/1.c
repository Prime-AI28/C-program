/*****************************************************************
Function in C:
**************

1. Function Declaration -------> return_type func_nsme(arg_list);
2. Function Defination
3. Function Call

*****************************************************************/

#include <stdio.h>

int oddeven(int x); // ----Step-1

int oddeven(int x) // -----Step-2
{
    return(x & 1);
}
int main()
{
    int x;
    scanf("%d", &x);

    if(oddeven(x)) //------Step-3
    {
        printf("odd");
    }
    else
    {
        printf("even");
    }
    return 0;
}