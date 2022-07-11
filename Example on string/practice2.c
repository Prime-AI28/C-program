#include <stdio.h>
#include <string.h>



int main()
{
char str1[]="Bombay";
char str2[30]="Nagpur";
int i,j,k;

i=strcmp(str1,"Bombay");

j=strcmp(str1,str2);

i=strcmp(str1,"Bombay Nagpur");

printf("\n %d %d %d",i,j,k);




return 0;
}