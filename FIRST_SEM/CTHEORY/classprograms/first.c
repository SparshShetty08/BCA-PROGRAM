#include<stdio.h>
//write a C program to get the sum of two sumbers and display the result
int main(){
  int firstnumber;  //declaration of 'firstnumber' of 'int'
  int secondnumber;
  int sum;   //variable to 'result' after doing addition
  firstnumber=60; //60s is stored in 'firstnumber'
  secondnumber=40;
  sum=firstnumber + secondnumber; //performs addition and result is stored
  printf("The sum of %d and %d is %d",sum); //prints result in display
  return 0;
}