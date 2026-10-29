#include<stdio.h>
int main(){
int a,b,c,choice,remainder;
printf("1.Smallest of three numbers \n");
printf("2.Largest of three numbers \n");
printf("3.Check a number for odd/even \n");
printf("4.Check for divisible by 5 \n");
printf("5.Swap two numbers \n");
printf("Enter your choice: \n");
scanf("%d",&choice);
switch (choice) {
  case 1:
     printf("enter the three numbers: \n");
     scanf("%d%d%d",&a,&b,&c);    
     if (a < b,a < c) {
       printf("%d is the smallest number",a);
     } else if ( b < c) {
       printf("%d is the smallest number",b);
     } else {
        printf("%d is the smallest number",c);
     }  
  break;
  case 2:
     printf("enter the three numbers: \n"); 
     scanf("%d%d%d",&a,&b,&c);
     if (a > b,a > c) {
       printf("%d is the largest number",a);
     } else if ( b > c) {
       printf("%d is the largest number",b);
     } else {
       printf("%d is the largest number",c);
     }
 break;
 case 3:
     printf("Enter a number: \n");
     scanf("%d",&a);
     remainder = a%2;    // dividend % divisor = remainder(modulus),/a is quotient (a%2 <-2 is divisor,a is dividend)
     if (remainder == 0)  {
       printf("%d is even",a);
     } else {
       printf("%d is odd",a);  
     }
  break;
 case 4:
     printf("Enter a number: \n");
     scanf("%d",&a);
     remainder = a%5;
     if (remainder == 0) {
       printf("%d is divisible by 5",a);
     } else {
       printf("%d is not divisible by 5",a);
     }
  break;
 case 5:
      printf("Enter two numbers: \n");
      scanf("%d%d",&a,&b);
      a = a + b;
      b = a - b;
      a = a - b;
      printf("After swap: a = %d, b = %d\n",a,b);
  break;
}
return 0;
}