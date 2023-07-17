#include<stdio.h>
int main()
{
    int a[100],i,j,p,q,temp=0;
    printf("Enter Num :");
    scanf("%d",&p);
    for(i=0;i<p-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<p-1;i++)
    {
        printf("Before Sorting :%d\n",a[i]);
    }
    for(i=0;i<p-1;i++)
    {
        for(j=i+1;j<p-1;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(i=0;i<p-1;i++)
    {
      printf("\nAfter Sorting :%d\t",a[i]);  
    }

}