#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,s1,s2,ct=0;
    char a[5],b[5];
    scanf("%s\n%s",&a,&b);
    s1=strlen(a);
    s2=strlen(b);
    if(s1==s2)
    {
        for(i=0;i<s1;i++)
        {
            for(j=0;j<s2;j++)
            {
                if(a[i]==a[j])
                {
                    a[j] = '*';
                    ct++;
                    break;
                }
               
            }
        }
    }
    else
    {
        printf("Its not an anagram");
    }

    if(s1==ct)
    {
        printf("Anagram");
    }

}