/* nested if ---> Reading a Mark., Print grade
100-91 = "S Grade", 90-81 = "A Grade", 80-71 = " B grade"*/

#include<stdio.h>

void main()
{
    int marks;
    scanf("%d", &marks);
    if (marks > 100)
        printf("Invalid Marks");
    else if (marks>= 91)
        printf("S Grade");
    else if (marks>= 81)
        printf("A Grade");
    else if (marks>= 71)
        printf("B Grade");
    else if (marks>= 61)
        printf("C Grade");
    else if (marks>= 51)
        printf("D Grade");
    else if (marks>= 41)
        printf("E Grade");
    else
        printf("Fail");
}
