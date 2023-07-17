#include<stdio.h>
#include<string.h>
int main()
{
      char s[100];
      int len,flag=0,count=0;
      scanf("%s",&s);
      len=strlen(s);
      for (int i = 1; i <= len - 1; i++)
      {
        printf("\ns[%d] = %c",i-1,s[i-1]);
        if(s[i-1] == s[i]){
          count += 1;
          if(count == 6){
            printf("YES");
            flag = 1;
            break;
          }
        }
        else{
          count = 0;
        }
      }
      if(!flag){
        printf("NO");
      }
      
}