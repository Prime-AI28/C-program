// C program to read 2 integer nos. and perform all arithemetic aoperations

#include <stdio.h>
//returntype func_name(arg_list)
void main()
{
    
    // variable - data 
    // datatype variable_name
    int a,b;
    float c,d,e,f;

    /// %d - int, %f - float, %c - char, %s - string

    printf("Enter two nos: ");
    scanf("%d",&a);  // 120000 a 100 (& used for memory allocation )
    scanf("%d",&b);

    c = a+b;
    printf("\n%f",c);
    
    d = a-b;
    printf("\n%f",d);

    e = a*b;
    printf("\n%f",e);

    f = a/b;
    printf("\n%f",f);

    // return(0);
}