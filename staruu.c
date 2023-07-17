#include<stdio.h>
int main()
{
    int count = 0, s1=0,s2=0,s3=0, n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            count += 1;
            if(j == 0){
                s1 += count;
            }
            if(i == n-1){
                s2 += count;
            }
            if(i == j){
                s3 += count;
            }
        }
    }
    printf("%d %d %d",s1,s2,s3);
}