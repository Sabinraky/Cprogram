#include<stdio.h>
int main()
{
    char a[30],temp[30],ch;
    int i=0;
    scanf("%s",a);
    while(a[i]!='\0')
    {
        i++;
    }
    for( int j=0;j<i;j++)
    {
        if((a[j] >= 'a') && (a[j] <= 'z'))
        {
            temp[j]=(int)a[j]-32;
            temp[j]=(char)ch;
            printf("%c",temp[j]);
        }
    }
}