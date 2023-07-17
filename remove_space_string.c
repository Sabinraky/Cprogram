#include <stdio.h>
#include <string.h>
int main()
{
    char a[40];
    int i,n;
    printf("Enter the string:\n");
    scanf("%[^\n]s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]==' ')
        continue;
        {
            printf("%c",a[i]);
        }
    }
}
