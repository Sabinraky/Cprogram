#include<stdio.h>
int main()
{
    char a[20],temp[20],ch;
    int n,i=0;
    scanf("%s",a);
    scanf("%d",&n);
    while(a[i]!='\0')
    {
        i++;
    }
    for(int j=0; j<i; j++){
        if(a[j]+n > 26){
            ch = a[j] - 26 + n;
            temp[j] = ch;
            printf("%c",temp[j]);
        }
        else{
            ch = a[j] + n;
            temp[j] = ch;
            printf("%c",temp[j]);
        }
    }
}