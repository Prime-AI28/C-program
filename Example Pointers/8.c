#include<stdio.h>
void main()
{
    int a,b,*p,*q;
    
    //p=-q; //illeagal use of pointer
    p=p-b;
    printf("%u, %d\n",p ,*p);
    //p=p-q; // non- portable pointer conversion
    p = (int*)(p-q);// valid
    printf("%u, %d\n",p ,*p);
    //p = p-q-a; // non- portable pointer conversion
    p = (int*)(p-q)-a;// valid
    printf("%u, %d\n",p ,*p);
    p = p+a;// valid
    printf("%u, %d\n",p ,*p);
    //p = p+q; // Invalid use of pointer (p-q, p*q,p/q)
}