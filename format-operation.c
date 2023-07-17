#include <stdio.h>
int main()
{
    int a,b;
    float c,d;
    printf("ENTER THE FIRST NUMBER :");
    scanf("%d",&a);
    printf("ENTER THE SEC NUMBER :");
    scanf("%d",&b);
    printf("%d",a*b);
    printf("ENTER FIRST FLOAT :");
    scanf("%f",&c);
    printf("ENTER SEC FLOAT :");
    scanf("%f",&d);
    printf("%0.1f",c-d);

    return 0;

}