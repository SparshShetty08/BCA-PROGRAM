// Program to demonstrate switch statement- 
// Bank Application with normal deposit and withdraw logic
#include<stdio.h>
int main(){
    int accountno=1000;
    float balance=500;
    int choice,amount,useraccount;
    printf("----Welcome to My Bank----\n");
    printf("1.Deposit\n");
    printf("2.Withdraw\n");
    printf("3.Show Account\n");
    printf("Enter your choice:[1/2/3]");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("Enter Account no:");
        scanf("%d",&useraccount);
        if(useraccount == accountno){
            printf("Valid account number\n");
            printf("Enter deposite amount:");
            scanf("%d",&amount);
            balance=balance + amount;
            printf("Account Updated, Current balance : %f",balance);
        }
        else{
            printf("Invalid Account Number..");
        }
        break;
        case 2:
        //withdraw
        printf("Enter the account no:");
        scanf("%d",&useraccount);
        if(useraccount == accountno){
            printf("Vaild account number\n");
            printf("Enter Withdraw amount");
            scanf("%d",&amount);
            if(amount <= balance){
                balance=balance - amount;
                printf("Account updated. Current amount: %f\n",balance);
            }
            else{
                printf("Insufficient balance..");
                }
        }
        else{
            printf("Invalid Account Number..");
        }
        break;
        case 3:
        //display
        printf("ACCOUNT NO\t|\tBALANCE\n");
        printf("%d\t\t|\t%f\n",accountno,balance);
    }
    printf("\nProgram terminated..");

}