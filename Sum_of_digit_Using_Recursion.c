#include <stdio.h>
int sum (int);
void main()
{
    int n,result;
    printf("Enter the number:\n");
    scanf("%d",&n);
    result = sum(n);
    printf("%d",result);
    return 0;
    
    
}
int sum (int n)
{
    
    if(n==0)
    {
        return n;
    }
    else
    {
        return n + sum(n-1);
    }
}