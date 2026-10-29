#include<stdio.h>
int main(){
int math,physics,chemistry;
float percentage;
printf("Enter Math marks:\n");
scanf("%d",&math);
printf("Enter Physics marks:\n");
scanf("%d",&physics);
printf("Enter Chemistry marks\n");
scanf("%d",&chemistry);
percentage = (math+physics+chemistry) / 3;
printf("Your percentage is %f%%\n",percentage);
if (percentage > 100){
 printf("Please input correct marks");
}else if (percentage >= 90) {
 printf("Your grade is A");
} else if (percentage >= 75){
 printf("Your grade is B");
} else if (percentage >= 50){
 printf("Your grade is C");
} else if (percentage >= 35){
 printf("Your grade is D");
} else {
 printf("You have failed");
}
return 0;
}