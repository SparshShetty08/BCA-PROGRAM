#include<stdio.h>
int main (){
 float Value;
 int AccountNo[10] = {1000,1234,4567};
 int chooseAcc = 0;
 int choice;
 float Balance[10] = {600,500,100000000000};

 printf("-----Welcome to my bank------ \n");
    printf("Enter your account number: \n");
    scanf("%d",&chooseAcc);
    printf("1.Deposit \n");
    printf("2.Withdraw \n");
    printf("3.Account \n");
    printf("4.Exit \n");
    printf("Enter your choice: \n");
    scanf("%d",&choice);
    
  for (int i=0;i<=9;i++) {    //i++ means i + 1
    if(AccountNo[i] == chooseAcc){
     switch (choice) {
         case 1:
            printf("Select how much you want to deposit: \n");
            scanf("%f",&Value);
            printf("Your new balance is: %f",Balance[i] += Value); 
            break;
          case 2:
            printf("Select how much you want to withdraw \n");
            scanf("%f",&Value);
              if (Balance[i]<Value) {
                 printf("Insufficient funds");
               } else {
                  printf("Your new balance is: %f \n",Balance[i]-Value);
               }
            break;
          case 3:
            printf("Your account no. is %d \n",AccountNo[i]);
            printf("Your balance is %f \n",Balance[i]);
          break;
          case 4:
            printf("The program is now closing");
            return 0;
          break;
     default:
     printf("Please enter valid Acoount Number");
     return 0;
    }   
   }
 }
return 0;
}