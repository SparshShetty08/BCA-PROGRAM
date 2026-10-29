#include<stdio.h>
int main (){                                  //try to add multiple accounts
    int AccountNo;
    int choice;
    float Balance = 500;
    float Value;
    printf("-----Welcome to my bank------");
    printf("Enter your account number: \n");
    scanf("%d",&AccountNo);
    printf("1.Deposit \n");
    printf("2.Withdraw \n");
    printf("3.Account \n");
    printf("4.Exit \n");
    printf("Enter your choice: \n");
    scanf("%d",&choice);
    switch (choice) {
    case 1:
    printf("Select how much you want to deposit: \n");
    scanf("%f",&Value);
    printf("Your new balance is: %f",Balance+Value); 
    break;/
    case 2:
    printf("Select how much you want to withdraw \n");
    scanf("%f",&Value);
     if (Balance<Value) {
        printf("Insufficient funds");
     } else {
        printf("Your new balance is: %f \n",Balance-Value);
     }
    break;
    case 3:
    printf("Your account no. is %d \n",AccountNo);
    printf("Your balance is %f \n",Balance);
    break;
    case 4:
    printf("The program is now closing");
    return 0;
    break;
    }
 return 0;
}
