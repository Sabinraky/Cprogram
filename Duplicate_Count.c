#include<stdio.h>
void main()
{
    int a[100],i,j,k,p,count=0;
    scanf("%d\n",&p);
    for(i=0;i<p-1;i++)
    {
        scanf("%d\n",&a[i]);
    }
    for(j=0;j<p-1;j++)
    {
        for(k=j+1;k<p-1;k++)
        {
            if(a[j]==a[k])
            {
                count++;
            }
        }
    }
    printf("Number Of Duplicate Element :%d",count);
}