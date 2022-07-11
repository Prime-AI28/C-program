// Reading a no. , Guessing game
#include<stdio.h>

void main()
{
    int a;
    scanf("%d", &a);

    if (a>=10 && a<=20)
    {
        printf("Correct guess!.....");
    }
    else
    {
        printf("Sorry!.... Wrong guess......");
    }
}