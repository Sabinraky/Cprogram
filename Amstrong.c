#include<stdio.h>
void main()
{
    int num,rem,sum=0,temp;
    printf("Enter the Number :");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+ rem*rem*rem;
        num=num/10;
    }
    if(temp==sum)
    {
        printf("Amstrong");
    }
    else
    {
        printf("Not Amstrong");
    }
}