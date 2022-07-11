#include<stdio.h>
#include<string.h>

int main()
{
    char source[] = "Bombay";
    char target[30] = "Nagpur";
    char copy[30];
    int i,j,k, l1, l2;

    srev(source);
    printf("%s", source);

    /*
    scpy(copy, source);
    printf("\n%s", target);
    */

    /*
    // string reversing
    strrev(source);
    printf("%s", source);
    */
    
    /*
    // copying a string
    strcpy(copy, source);
    printf("%s", copy);
    */

    /*
    // length of a string
    l1 = strlen(source);
    printf("\n%d", l1);
    */

    /*
    // checking if the strings are equal
    i = strcmp(source, "Bombay");
    j = strcmp(source, target);  
    k = strcmp("Bombay", "Bombay Nagpur");
    printf("\n%d %d %d", i,j,k);
    */

    /*
    // concatination of strings
    strcat(target, source);
    printf("%s\n", source);
    printf("%s", target);
    */

    return 0;
}

scpy(char *t, char *s)
{
    while (*s != '\0')
    {
        *t = *s;
        s++;
        t++;
    
    } *t = '\0';
}

int srev(char s[])
{
    char temp[50];
    int i;
    i = strlen(s)-1;

    while (i>=0)
    {
        strcat(temp,s[i]);
        i--;
    }
    return temp;
}

int scat()
{
    int i, j;
}