#include<stdio.h>
int main(){
int i = 0;
int j = 0;
int k = 0;
int n,m,total;
printf("Enter number of tickets:");
scanf("%d",&n);
for (int a = 1;a <= n;a++){
 printf("Enter category for ticket %d (1/2/3):",a);
 scanf("%d",&m);
 if (m == 1){
    i += 1 ;
 }
 if (m == 2){
    j += 1 ;
 }
 if (m == 3){
    k += 1 ;
 }
}
printf("------Final Bill------\n");
printf("Regular tickets:%d\n",i);
printf("Premium tickets:%d\n",j);
printf("Recliner tickets:%d\n",k);
total = (i*150) + (j*250) + (k*400);
printf("Total(Before discount):%d\n",total);
if (n > 5){
 printf("Discount Applied:Yes\n");
 total -= (10*total/100);
} else {
 printf("Discount Applied:No\n");
}
printf("Final Amount:%d",total);
return 0;
}