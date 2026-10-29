#include<stdio.h>
void addition(int a, int b){
  int sum;
  sum = a + b;
  printf("%d\n",sum);
}
int main(){
  addition(10, 20);
  addition(100, 200);
  return 0;
}