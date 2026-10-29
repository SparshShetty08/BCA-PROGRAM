#include<stdio.h>
int main(){
 int a,b;
 printf("Enter the two numbers:\n");
 scanf("%d and %d",&a,&b);
 a = a + b;
 b = a - b;
 a = a - b;
 printf("%d and %d",a,b);
 return 0;
}