#include <stdio.h>
#include<conio.h>
#include<string.h> // use for character testing function

void main()
{
    char name[10]; // array variable 
    printf("Enter the string: ");
    // puts("Enter the string:");
    scanf("%s",&name); 
    // name = gets();
    printf("%s", name);
    // puts( name);
    if (Islower(name)) 
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}