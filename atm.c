#include<stdio.h>

void withdrawl(int *cash, int *balance){
    int amt;
    printf(" \n Enter Amount:");
    scanf("%d",&amt);  
    if(amt > *cash){
        printf(" \n Transaction Failed: Insufficient Funds!");
    } else if(amt > *balance){
        printf(" \n Transaction Failed: Insufficient Account Balance");
    } else{
        *balance -= amt;
        *cash -= amt;
        printf(" \n Transaction Success!");
        return;
    }
}

void deposit(int *cash, int *balance){
    int n,y, amt, tot = 0;
    char more =  y ;   
    while(more ==  y ){
        more =  n ;
        printf(" \n Enter Amount:");
        scanf("%d",&amt);
        *balance += amt;
        tot += amt;
        *cash += amt;
        printf(" \n Do you want to Deposit more cash? y or n:");
        scanf("%c",&more);
    }
    printf(" \n Transaction Success!");
    printf(" \n Total cash deposited:%d",tot);
    return;
}

int main(){
    int acc, pin, choice, index = -200, code = 1, cash = 0;
    int accounts[] = {1001,1002,1003,1004};
    int pins[] = {1234,4123,3412,2341};
    int balance[] = {25000,25000,25000,25000}; 

    for(int i=0; i<(sizeof(balance)/sizeof(balance[0]));i++){
        cash+=balance[i];
    } 
    
    do {
        printf(" \n Enter your Account Number:");
        scanf("%d",&acc);
        for(int i=0;i<(sizeof(accounts)/sizeof(accounts[0]));i++){
            if(accounts[i] == acc){
                index = i;
                break;
            }
        }
    if(index!=-200){
        printf(" \n Enter your PIN Number:");
        scanf("%d",&pin);
        if(pins[index] == pin){
            printf(" \n1. Withdrawl\n2. Deposit\n3. Balance Inquiry\n");
            scanf("%d",&choice);
            switch (choice){
                case 1: withdrawl(&cash, &balance[index]);
                        printf(" \n Available Balance:%d",balance[index]);
                        break;

                case 2: deposit(&cash, &balance[index]);
                        printf(" \n Available Balance:%d",balance[index]); 
                        break;

                case 3: printf(" \n Available Balance:%d",balance[index]);
                        printf(" \n Transaction Success!");
                        break;

                default: printf(" \n Invalid Operation!");           
            }
        } else{
            printf(" \n Invalid PIN!");
        }
    } else{
        printf(" \n No Account Found");
    }
    
    printf(" \n Thankyou for your Transaction!");
    printf(" \n Rate this Transaction:");
    scanf("%d",&code);

    }while(code != -403);
    
    return 0;
}