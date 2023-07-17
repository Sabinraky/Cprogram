// TASK

// Complete the function void update(int *a,int *b). 
// It receives two integer pointers, int* a and int* b. 
// Set the value of  to their sum, and  to their absolute difference. 
// There is no return value, and no return statement is needed.

// Input Format ::::

// The input will contain two integers, a and b, separated by a newline.

// Output Format ::::

// Modify the two values in place and the code stub main() will print their values.

// Note: Input/ouput will be automatically handled. 
// You only have to complete the function described in the 'task' section.


#include <stdio.h>
int main()
{
    int a,b;
    int sum=0;
    int diff=0;
    printf(" \n ENTER THE FIRST NUMBER :");
    scanf("%d",&a);
    printf(" \n ENTER THE SECOND NUMBER :");
    scanf("%d",&b);
    sum = a+b;
    printf("THE SUM OF A+B : %d \n ",sum);

    if(a>=b)
    {
        diff=a-b;
    }
    else
    {
        diff=b-a;
        printf("THE DIFF OF A-B : %d",diff);
    }
    

}
