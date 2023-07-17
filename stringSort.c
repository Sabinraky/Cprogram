#include<stdio.h>
void main()
{
    char a[100],temp;
    scanf("%s",a);
    int i;
    while(a[i]!='\0')
    {
        i++;
    }
    for(int j=1; j<i; j++){
        if(a[j-1] > a[j]){
            temp = a[j-1];
            a[j-1] = a[j];
            a[j] = temp;
        }
    }
    printf("%s",a);
}