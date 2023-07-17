#include<stdio.h>
#include<string.h>
void main()
{
    int i,j;
    char a[6][10]={"xxx","bbb","yyy","ccc","zzz","aaa"};
    char temp[10];
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
    for(i=0;i<6;i++)
    {
        printf("%s\t",a[i]);
    }
}