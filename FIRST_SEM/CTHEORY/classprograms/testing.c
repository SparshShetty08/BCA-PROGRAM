#include<stdio.h>  //using for loop
int main (){
 float Value;
 int AccountNo[10] = {1000,1234};
 int chooseAcc;
 int choice;
 float Balance[10] = {600,500};
 float c[10];
 int found = 0;
    printf("-----Welcome to my bank------ \n");
    printf("Enter your account number: \n");
    scanf("%d",&chooseAcc);
    printf("1.Deposit \n");
    printf("2.Withdraw \n");
    printf("3.Account \n");
    printf("4.Exit \n");
    printf("Enter your choice: \n");
    scanf("%d",&choice);
   for (int i = 0; i < 9; i++){ //for (initialization; condition ;update){
    if (AccountNo[i] == chooseAcc) {
     found = 1;
     switch (choice) {
          case 1:
            printf("Select how much you want to deposit: \n");
            scanf("%f",&Value);
             c[i] = Balance[i]+Value;
             Balance[i] = c[i]; 
            printf("Your new balance is: %f",c[i]);
            break;
          case 2:
            printf("Select how much you want to withdraw \n");
            scanf("%f",&Value);
              if (Balance[i]<Value) {
                 printf("Insufficient funds");
               } else {
                   c[i] = Balance[i]-Value;
                   Balance[i] = c[i];
                   printf("Your new balance is: %f \n",c[i]);
                   printf("%f",Balance[i]);
               }
            break;
          case 3:
             printf("Your account no. is %d \n",AccountNo[i]);
             printf("Your balance is %f \n",Balance[i]);
             printf("%f",Balance[i]);
            break;
          case 4:
             printf("The program is now closing");
             return 0;
            break;
         }
     
    }
     if (!found){
     printf("Please enter valid account number");
     }
    return 0;
  }
  
    return 0;
}

 