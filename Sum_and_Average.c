#include <stdio.h>
int main()
{
    int a[100],i,n,c=0;
    printf("Enter the limit:\n");
    scanf("%d",&n);
    printf("Enter the marks:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c=c+a[i];
    }
    printf("Sum : %d",c); 
}