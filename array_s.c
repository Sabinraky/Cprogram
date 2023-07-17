// #include<stdio.h>
// int main()
// {
//     int temp, arr[5];
//     for ( int i=0;i<5;i++)
//     { 
//         scanf("%d",&arr[i]);
//         printf("%d\t",arr[i]);
//     }
//     for(int i =0 ;i<5;i++)
//     {
//         for (int j=i+1;j<5;j++)
//         {

//              temp=arr[i];
//              arr[i]=arr[j];
//              arr[j]=temp;

//         }
//     }
//     printf("%d",arr[temp]);
   


   /*
    * C program to accept a set of numbers and arrange them
    * in a descending order
    */
 
    #include <stdio.h>
    void main ()
    {
 
        int number[30];
 
        int i, j, temp, n;
        printf("Enter the value of N\n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
	        scanf("%d", &number[i]);
 
        /*  sorting begins ... */
 
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (number[i] < number[j]) 
                {
                    temp = number[i];
                    number[i] = number[j];
                    number[j] = temp;
                }
            }
        }
 
        printf("The numbers arranged in descending order are given below\n");
 
        for (i = 0; i < n; ++i) 
        {
            printf("%d\n", number[i]);
        }
 
    }
















//www.sanfoundry.com/c-program-swap-array-elements-using-pointers/