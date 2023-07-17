#include <stdio.h>
int max(int a,int b,int c,int d)
{
    if(a>b && a>c && a>d)
    return a;
    else if(b>a && b>c && b>d)
    return b;
    else if(c>a && c>b && c>d)
    return c;
    else 
    return d;
}
int main()
{
 int a,b,c,d;
 int result=0;
 scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
 result=max(a,b,c,d);
 printf("%d",result);
 return 0;
}
     
