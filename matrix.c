#include<stdio.h>
int main()
{
    int n,even = 0,s[10] = {0};
    int a[10][10];
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            s[i] += a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        if(s[i] % 2 == 0)
        {
            even += s[i];
        }
    }
    printf("\n%d",even);
}