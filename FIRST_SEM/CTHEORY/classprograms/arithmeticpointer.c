#include <stdio.h>
void swap(int *a,int *b){
   int t = *a;
   *a = *b;
   *b = t;
}
int main(){
   int m = 10;
   int n = 20;
   swap(&m,&n);
   printf("%d,%d",m,n);
}