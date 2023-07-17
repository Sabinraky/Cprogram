#include <stdio.h>
int main()
{

    int n,i;
    char a[100];
    printf("Enter the limits:\n");
    scanf("%d",&n);
    printf("Enter the names:\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
}
