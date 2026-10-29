#include<stdio.h>
int main (){
 float Value;
 int AccountNo[10] = {1000,1234};
 int chooseAcc;
 int choice;
 float Balance[10] = {600,500};

    printf("-----Welcome to my bank------ \n");
    printf("Enter your account number: \n");
    scanf("%d",&chooseAcc);
    printf("1.Deposit \n");
    printf("2.Withdraw \n");
    printf("3.Account \n");
    printf("4.Exit \n");
    printf("Enter your choice: \n");
    scanf("%d",&choice);
    
  if (AccountNo[0] == chooseAcc) {
     switch (choice) {
          case 1:
            printf("Select how much you want to deposit: \n");
            scanf("%f",&Value);
            printf("Your new balance is: %f",Balance[0]+Value); 
            break;
          case 2:
            printf("Select how much you want to withdraw \n");
            scanf("%f",&Value);
              if (Balance[0]<Value) {
                 printf("Insufficient funds");
               } else {
                  printf("Your new balance is: %f \n",Balance[0]-Value);
               }
            break;
          case 3:
             printf("Your account no. is %d \n",AccountNo[0]);
             printf("Your balance is %f \n",Balance[0]);
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
             printf("Your new balance is: %f",Balance[1]+Value); 
          break;
          case 2:
             printf("Select how much you want to withdraw \n");
             scanf("%f",&Value);
              if (Balance[1]<Value) {
                printf("Insufficient funds");
             } else {
                printf("Your new balance is: %f \n",Balance[1]-Value);
             }
          break;
          case 3:
             printf("Your account no. is %d \n",AccountNo[1]);
             printf("Your balance is %f \n",Balance[1]);
          break;
          case 4:
             printf("The program is now closing"); 
             return 0;
          break;
       }
    }
return 0;
}