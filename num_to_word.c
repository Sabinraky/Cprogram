#include <stdio.h>
#include <string.h>
void main()
{
    int n;
    char words[10][6]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
    printf("ENTER THE NUMBER :");
    scanf("%d",&n);
    if(n<=9)
    {
        printf(" THE NUMBER IS :%s",words[n]);
    }
    else
    {
        printf("INPUT EXCEED LIMIT");
    }
}