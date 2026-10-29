#include<stdio.h>
int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int sum(int s[],int n){
    if (n == 1) {
       return s[n - 1];
    }
    return s[n - 1] + sum(s,n - 1);  
}
int main(){  
  int m;
  printf("Enter a number to calculate its factorial: ");
  scanf("%d", &m);
  int result = factorial(m);
  printf("Factorial of %d is %d\n", m, result);
  int n;
  printf("Enter size:");
  scanf("%d",&n);

  int s[n];
  for (int i = 0; i < n; i++)
  { 
    printf("Enter array value:");
    scanf("%d",&s[i]);
  }
  int add = sum(s,n);
  printf("Sum: %d ",add);
}