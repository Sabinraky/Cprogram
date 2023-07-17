#include <stdio.h>
#include <math.h>
int main()
{
  int n,m,sum=1;
  int i;
  printf("ENTER THE NUMBER :");
  scanf("%d",&n);
  while(n !=0)
  {
   sum *= n;
   n--;
  }

printf("%d",sum);
}