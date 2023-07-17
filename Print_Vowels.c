#include <stdio.h>
#include <string.h>
int main()
{

    int n,i;
    char a[100];
    printf("Enter the names:");
    scanf("%[^\n]s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
    
    {
     printf("%c",a[i]);
    }
   }
}