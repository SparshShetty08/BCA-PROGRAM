#include<stdio.h>
int main(){
 int counterstart;
 printf("Enter starting number:\n");
 scanf("%d",&counterstart);
 while (counterstart == 250){
  printf("%d\n",counterstart);
  counterstart++;
 }
return 0;
}