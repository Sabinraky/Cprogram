#include <stdio.h>
int factorial (int);
int main()
{
    //printf("Enter the number:\n");
    //scanf("%d",&n);
    //result = factorial(n);
    printf("%d",factorial(5));
    return 0;
    
    
}
int factorial (int n)
{
    
    if(n>0)
    {
        return n* factorial(n-1);
    }
    else
    {
        return 1;
    }
}