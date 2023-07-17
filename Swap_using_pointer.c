#include<stdio.h>  
int sum(int *a,int *b);  
void main()  
{  
    int a=10,b=20;
    printf("\nGoing to calculate the sum of two numbers:\n");
    printf("before fun%d %d\n",a,b);
    sum(&a,&b);
    printf("after fun%d %d\n",a,b);
    
    
}  
int sum(int *a,int *b)  
{  
       
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("using fun%d 
    %d\n",*a,*b);
    
}  