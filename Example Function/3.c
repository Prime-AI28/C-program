
#include <stdio.h>
    /* Function declarations */
    int isPerfect(int num);
void printPerfect(int start, int end);
int main()
{
    int start, end;
    scanf("%d", &start);
    scanf("%d", &end);
    // Function Call
    printPerfect(start, end);
    return 0;
} /**
   * Check whether the given number is perfect or not.
   * Returns 1 if the number is perfect otherwise 0.
   */
int isPerfect(int num)
{
    int i, sum;
    /* Finds sum of all proper divisors */ // 6 --> 1+2+3=6; 28=1+2+4+7+14 1 100000
    sum = 0;
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    } /*
       * If sum of proper positive divisors equals to given number
       * then the number is perfect number
       */
    if (sum == num)
        return 1;
    else
        return 0;
} // Print all perfect numbers between given range start and end.
void printPerfect(int start, int end)
{
    while (start <= end)
    {
        if (isPerfect(start))
        {
            printf("%d\t", start);
        }
        start++;
    }
}
