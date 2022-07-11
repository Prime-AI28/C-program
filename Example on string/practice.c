#include <stdio.h>
#include<conio.h>
#include<math.h>
int main()
{

int a[5][5],b[5][5],c[5][5],i,j,k,m,n,p,q;



printf("Enter the order of matrix 1:");
scanf("%d%d",&m,&n);



printf("Enter the order of matrix 2:");
scanf("%d%d",&p,&q);
if(n==p)
{
printf("Enter the elements of matrix 1:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);

printf("Enter the elements of matrix 2:\n");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%d",&b[i][j]);

/*
22 33 44
44 55 66
77 88 99

1 2 3
4 5 6
7 8 9 */



for(i=0;i<m;i++)
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<p;k++)
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
else
printf("Matrix multiplication is invalid\n");
printf("Result of matrix multiplication is:\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
printf("%d\t",c[i][j]);
printf("\n");
}
return 0;
}