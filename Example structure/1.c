#include<stdio.h>
#include<string.h>

struct student
{
    char name[25];
    int age;
    char branch[10];
    char gender[];
};

int main()
{
    struct student s1,s2;

        s1.age = 18;
        scanf("%d", &s2.age);

    strcpy(s1.name, "Aditya");
    scanf("%s", s2.name);

    printf("%s\n", s1.name);
    printf("%d\n", s1.age);
    printf("%s\n", s2.name);
    printf("%d\n", s2.age);
    return 0;
    
}