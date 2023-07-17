#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(j=1 ;j<=i;j++)
        {
            printf("*");
        if(j==i)
            for( k=n;k>=j;k--)
            {
                printf("#");
            }
        }
        printf("\n");
    }

}