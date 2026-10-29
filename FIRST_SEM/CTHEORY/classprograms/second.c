#include<stdio.h>
//write a C program to get the sum of two sumbers and display the result
//to demo scanf()
int main(){
  int firstnumber;  //declaration of 'firstnumber' of 'int'
  int secondnumber;
  scanf("%d and %d",firstnumber,secondnumber);
  int sum;   //variable to 'result' after doing addition
  sum=firstnumber + secondnumber; //performs addition and result is stored
  printf("The sum of %d and %d is %d",sum); //prints result in display
  return 0;
}