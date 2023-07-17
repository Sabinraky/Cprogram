#include <stdio.h>
int main()
{
    int a[100],i,j,n,temp;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]>a[j])
          {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
          }
        }
    }
    printf("Assending order:\n");
    for(i=0;i<n;i++)
    {
    printf("%d\n",a[i]);
    }
    printf("%d",a[n-2]);
    
}
