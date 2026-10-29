#include<stdio.h>
#include<stdlib.h>
int main(){
   int *p = (int*)malloc(5*sizeof(int));
   int sum = 0;
   for (int i = 0;i<=5;i++){
    sum = sum+p[i];
   }
   printf("sum using malloc:%d\n",sum);
   sum = 0;
   int *q = (int*)calloc(5,sizeof(int));
   for (int i = 0;i<=5;i++){
    sum = sum+q[i];
   }
   printf("sum using calloc:%d",sum);
   return 0;
}