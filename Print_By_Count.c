#include<stdio.h>
void main()
{
    int a,b,c,i,j,k;
    char l,m,n;
    scanf("%d %c %d %c %d %c",&a,&l,&b,&m,&c,&n);
    for(i=0;i<a;i++)
    {
        printf("%c",l);
    }
    for(j=0;j<b;j++)
    {
        printf("%c",m);
    }
    for(k=0;k<c;k++)
    {
        printf("%c",n);
    }
}