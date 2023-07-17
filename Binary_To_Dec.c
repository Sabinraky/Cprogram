#include<stdio.h>
int main()
{
    int bin,dec=0,pow=1,rem,temp;
    printf("Enter Binary :");
    scanf("%d",&bin);
    temp=bin;
    while (temp!=0)
    {
        rem = temp % 10;
        dec = dec + rem*pow;
        temp = temp /10;
        pow = pow *2;
    }
    printf("Binary :%d\n",bin);
    printf("Decimal :%d",dec);
    
}
