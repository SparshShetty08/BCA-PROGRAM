#include <stdio.h>
void insertion(int n,int j,int k,int i[]){
   printf("Enter element of the array:\n");
   scanf("%d",&j);
   printf("Enter the position of the element in the array:\n");
   scanf("%d",&k);
   k--;
   if ((k >= n) || (k < 0)){
      printf("Invalid position\n");
      return;
   } else{
      for (int m = n - 1 ;m > k;m--){
         i[m] = i[m - 1];
      }
      i[k] = j;
   }
}

int deletion(int n,int k,int i[]){
   printf("Enter the position:");
   scanf("%d",&k);
   k--;
   if ((k >= n)||(k <0)){
      printf("Invalid position\n");
      return n;
   } else{
      for (int m = k;m < n;m++){
         i[m] = i[m+1];
      }
      n--;
   }
   return n;
}  

void display(int n,int temp[]){
     for(int m = 0;m < n;m++){
      printf("%d\n",temp[m]);
     }
}
int main(){
   int i[6] = {10, 20, 30, 40, 50};
   int n = 6;
   int j = 0;
   int k = 0;
   display(n,i);
   insertion(n,j,k,i);
   display(n,i);
   n = deletion(n,k,i);
   display(n,i);
   return 0;
}