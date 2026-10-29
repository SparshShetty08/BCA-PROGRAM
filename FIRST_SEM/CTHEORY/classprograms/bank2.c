#include<stdio.h>
int main(){
 float Value;
 int AccountNo1 = 12345;
 int AccountNo2 = 50000;
 int choice;
 float Balance1 = 500;
 float Balance2 = 600;

 printf("-----Welcome to my bank------");
    printf("Enter your account number: \n");
    scanf("%d",&AccountNo1);
    printf("1.Deposit \n");
    printf("2.Withdraw \n");
    printf("3.Account \n");
    printf("4.Exit \n");
    printf("Enter your choice: \n");
    scanf("%d",&choice);
  if (AccountNo1 = 12345) {
     switch (choice) {
     case 1:
     printf("Select how much you want to deposit: \n");
     scanf("%f",&Value);
     printf("Your new balance is: %f",Balance1+Value); 
     break;
     case 2:
     printf("Select how much you want to withdraw \n");
     scanf("%f",&Value);
     if (Balance1<Value) {
        printf("Insufficient funds");
     } else {
        printf("Your new balance is: %f \n",Balance1-Value);
     }
     break;
     case 3:
     printf("Your account no. is %d \n",AccountNo1);
     printf("Your balance is %f \n",Balance1);
     break;
      case 4:
     printf("The program is now closing");
     return 0;
     break;
    }
    } else {
     switch (choice) {
     case 1:
     printf("Select how much you want to deposit: \n");
     scanf("%f",&Value);
     printf("Your new balance is: %f",Balance2+Value); 
     break;
     case 2:
     printf("Select how much you want to withdraw \n");
     scanf("%f",&Value);
     if (Balance2<Value) {
        printf("Insufficient funds");
     } else {
        printf("Your new balance is: %f \n",Balance2-Value);
     }
     break;
     case 3:
     printf("Your account no. is %d \n",AccountNo2);
     printf("Your balance is %f \n",Balance2);
     break;
     case 4:
     printf("The program is now closing"); 
    return 0;
    break;
     }
    }
    return 0;
}