// GREATEST AMONG N NUMBERS

#include <stdio.h>
#include <math.h>
int main()
{
  int arr[100],n,mx=0;
  printf("ENTER VALUE OF N :");
  scanf("%d",&n);
  for (int i=0;i<=n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++)
  {
    if(arr[i]> mx)
    {
        mx=arr[i];
    }
  }
}