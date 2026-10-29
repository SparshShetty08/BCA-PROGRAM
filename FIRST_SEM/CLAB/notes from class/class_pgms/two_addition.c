#include<stdio.h>
//write a c program to get the sum of two number and display the result
int main(){
    int firstnumber;   //declare 'firstnumber' of 'int'
    int secondnumber;
    int sum;     //variable to 'result' after doing addition
    firstnumber=100;  //10 is stored in 'firstnumber
    secondnumber = 200; 
    sum=firstnumber + secondnumber;   //performs addition and result is stored in 'sum'
    printf("The sum of %d and %d is : %d",firstnumber,secondnumber,sum);   //prints result in display
    return 0;
}