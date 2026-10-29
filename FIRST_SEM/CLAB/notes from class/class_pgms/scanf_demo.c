//to demo scanf()
#include<stdio.h>
int main(){
    int firstnumber,seconnumber;  //variable declaration
    printf("Enter the first number");   // output operation - writes to display
    scanf("%d",&firstnumber);       //input operation- reads an integer from KB
    printf("Enter the second number");
    scanf("%d",&seconnumber);
    int sum=firstnumber + seconnumber;
    printf("Sum is : %d", sum);   //writes to display
    
}