#include<stdio.h>  
void addition(){
    int a = 100;
    int b = 200;
    int sum;
    sum = a + b;
    printf("The sum is %d\n",sum);
}
int main(){
    int sub[5] = {1,2,3,4,5};
    addition();
    for(int i = 0;i<5;i++){
        printf("%d\n",sub[i]);
    }
    return 0;
}