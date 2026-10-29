#include<stdlib.h>
#include<stdio.h>
void main(){
   int *p;
   p = (int*)malloc(5*sizeof(int));
   int *q;
   q = (int*)calloc(5,sizeof(int));
   for(int i = 0;i<=5;i++){
    printf("%d\n",p[i]);
    
    printf("%d\n",q[i]);
}
   free(p);
   free(q);
}