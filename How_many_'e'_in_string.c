#include <stdio.h>
#include <string.h>
int main()
{

    int n,i,c=0;
    char a[100];
    printf("Enter the names:");
    scanf("%[^\n]s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
    if(a[i]=='e')
    c++;
    }
     printf("%d",c);
   
}