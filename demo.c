#include<stdio.h>
#include<string.h>
void main()
{
    char c[100];
    int i,j,s,count=0;
    scanf("%s",&c);
    s=strlen(c);
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(i==j)
            {
                count+=1;
                break;
            }
        }
    }
    if(count>=7)
    {
        printf("yes");
    }
    else
    {
        printf("NO");
    }
}