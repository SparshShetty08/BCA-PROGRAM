#include <stdio.h>
int arraysize(int i){
      i = 0;
      printf("Enter Size of Array:");
      scanf("%d",&i);
      return i;
}
bool validate(int i){//do not write
      if (i<4){
         printf("Array size is not valid,please retry\n");
         return false;
      }else{
         return true;
      }
}
int input(int i,int sub[]){
      for (int k = 0;k<i;k++){
         printf("Enter array element:");
         scanf("%d",&sub[k]);
      }
      return sub[i];
}
void display(int i,int sub[]){
      for(int j = 0;j < i;j++){
            printf("%d",sub[j]);
      }
}
int add(int i,int sub[]){
      int sum = 0;
      for (int l = 0;l<i;l++){
         sum = sum + sub[l];
      }
      return sum;
}
int main(){
      int i = 0;
      int sum = 0;
//      bool validated = false;
//      do{
      i = arraysize(i);
//         validated = validate(i);
//      } while (validated == false);
      int sub[i]; 
      input(i,sub);
      display(i,sub);
      sum = add(i,sub);
      printf("Sum of Array elements is %d",sum);
      return 0;
}