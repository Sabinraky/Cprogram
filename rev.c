#include<stdio.h>

int main(){
    int n1, n2;
    scanf("%d",&n1);
    while (n1 != 0){
        n2 = n1 % 10;
        n2 *= 10;
        n1 /= 10;
    }
    printf("%d",n2);
    return 0;
}