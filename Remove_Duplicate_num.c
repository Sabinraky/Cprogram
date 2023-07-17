#include<stdio.h>
int main()
{
    int i,j,a[20],ct; 
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]==a[j])
            ct++;
        }
        if(ct==0)
        printf("%d\t",a[i]);
    }
    
}
        
    
    
