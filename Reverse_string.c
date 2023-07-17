#include <stdio.h>
#include <string.h>
int main()
{
    int i,n,j;
    char a[30];
    scanf("%[^\n]s",a);
    n=strlen(a);
    for(i=n-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
}
    
    
