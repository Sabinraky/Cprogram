#include <stdio.h>
int main()
{
    int copy,n,rev=0;
    printf("Enter the numbers:\n");
    scanf("%d",&n);
    copy = n;
    while(copy>0)
    {
        rev = rev*10;
        rev = rev+(copy%10);
        copy = copy/10;
    }
    printf("Reverse : %d",rev);
}