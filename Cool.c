#include<stdio.h>
int cool(int n, int k){
    int a[100], i = 0, sum = 0;
    while(n > 0){
        a[i] = n % 2;
        n = n / 2;
        i++;
    }
    for(int j = i-1; j >= 2; j--){
        if((a[j] == 1) && (a[j-1] == 0) && (a[j-2] == 1)){
            sum++;
        }
    }
    if(sum >= k){
        return sum;
    }
    else{
        return 0;
    }
}

int main()
{
    int r ,s, k, tot = 0;
    scanf("%d%d",&r,&k);
    for(int j=5;j <= r; j++){
        s = cool(j,k);
        tot = tot + s;
    }
    printf("%d",tot);
    return 0;
}