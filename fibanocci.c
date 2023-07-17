#include<stdio.h>
int main()
{
    int a=0,b=1,c;
    printf("%d\n%d\n",a,b);
    for(int i=0;i<10;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
}