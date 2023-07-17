#include <stdio.h>
int main()
{
    int i,j,space,row;
    printf("Enter the row:");
    scanf("%d",&row);
    space=row-1;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(j=1;j<i;j++)
        {
            printf("%d",j);
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
          printf("\n");
          space--;
        
    }
}