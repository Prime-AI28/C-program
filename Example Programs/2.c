// Difference between Global and Local Variable
#include <stdio.h>
float pi = 3.14159; /* Global*/

void main()
{
    float rad; /* Local*/
    float area, peri;
    printf("Enter the radius= ");
    scanf("%f", &rad);

    area = pi * rad*rad;
    peri = 2 * pi * rad;

    printf("Area = %f\n", area);
    printf("Perimeter = %f\n", peri);

}