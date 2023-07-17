#include<stdio.h>

int main(){
    int n,a[10],tot=0, val;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        tot += a[i];
    }
    int i = 2;
    while(tot > 0){
        if(tot % i == 0){
            val = i;
            break;
        }
        i++;
    }
    printf("%d",val);
}