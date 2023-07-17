#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,n,temp;
    char a[30];
    printf("Enter the string\n");
    scanf("%[^\n]s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]>a[j])
          {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
          }
        }
    }
    printf("Sorting a string:\n");
   
    printf("%s",a);
    
}
