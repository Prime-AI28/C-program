#include<stdio.h>
const int MAX = 5;
void Add10(int *StudentMarks)
{
    int i;
    for (i = 0; i<MAX; i++)
        *StudentMarks++ +=10;
}
void main()
{
    int j;
    int Marks[5] = {25, 43, 70, 80, 76};
    //printf("\n Value of Marks = %d", Marks);
    Add10(Marks);
    for (j=0; j<MAX; j++)
        printf("\n MArks[%d] = %d", j, Marks[j]);
    //printf("\n Now Value of Marks = %d",Marks);
}