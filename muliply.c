#include <stdio.h>
#include <math.h>
int main()
{
    int i,a,sum=0;
    printf("ENTER THE NUMBER :");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        sum=a*i;
        printf("\n%d X %d = %d", a, i, sum);
    }
}


