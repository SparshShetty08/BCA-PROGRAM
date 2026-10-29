#include<stdio.h>
int main(){
int a,b,c,choice,remainder;
printf("1.Smallest of three numbers \n");
printf("2.Largest of three numbers \n");
printf("Enter your choice: \n");
scanf("%d",&choice);
switch (choice) {
  case 1:
     printf("Enter the three numbers: \n");
     scanf("%d%d%d",&a,&b,&c);    
     if (a < b && a < c) {
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
     if (a > b && a > c) {
       printf("%d is the largest number",a);
     } else if ( b > c) {
       printf("%d is the largest number",b);
     } else {
       printf("%d is the largest number",c);
     }
     break;
}
}