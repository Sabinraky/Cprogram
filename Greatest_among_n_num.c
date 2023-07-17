#include <stdio.h>
int main()
{
    int a[100],i,n;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        if(a[0]<a[i])
       {
        a[0]=a[i];
       }
    }
    printf("Greatest num is : %d",a[0]);
}

   
