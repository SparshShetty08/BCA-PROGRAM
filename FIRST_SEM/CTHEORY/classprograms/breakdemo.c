#include<stdio.h>
int main(){
 for (int i=1;i<=6;i++){
      printf("Loop Started");
      for(int j=1;j<5;j++){
         printf("Inner Loop started");
         if(i%2 == 0){
         break;
         }
         printf("From Inner Loop");
      }
     printf("From outer loop");
     if(i%2 == 0){
        break;
      }
    }
 printf("Program terminated..");
 return 0;
} 