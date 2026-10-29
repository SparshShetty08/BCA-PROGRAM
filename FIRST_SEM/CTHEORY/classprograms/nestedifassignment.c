#include<stdio.h>        //rewrite ts more efficiently fam
int main(){
 int age;
 int Is_Indian;
 int testcleared;
 int feepaid;
 printf("------Welcome to DL test-------");
 printf("Enter Nationality[1-Indian/0-NonIndian]:");
 scanf("%d",&Is_Indian);
 printf("Enter your age:");
 scanf("%d",&age);
 printf("Whether test is cleared[1/0]:");
 scanf("%d",&testcleared);
 printf("Enter Fee Paid[500]:");
 scanf("%d",&feepaid);
 if (Is_Indian == 1) {
     if (age >= 18 && age <= 60){  
       if (testcleared == 1){
        if (feepaid == 500 ){
          printf("Age: %d\n",age);
          printf("Nationality: %d\n",Is_Indian);
          printf("Test Cleared: %d\n",testcleared);
          printf("Fee Paid: %d\n",feepaid);
          printf("DL issued successfully");
          } else {
          printf("DL cannot be issued for-test not cleared");
         }
        } else {
          printf("DL cannot be issued for-specified funds not submitted");
       }
     } else {
      printf("DL cannot be issued for-Inappropriate age");
     }
  } else {
  printf("DL cannot be issued for-Not Indian");
  }
 return 0;
}