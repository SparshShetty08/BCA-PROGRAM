#include<stdio.h>
int main(){
  float percentage;
  int total_marks = 100;
  scanf("%f",&percentage);
  int age;
  scanf("%d",&age);
  int is_Indian;
  printf("Enter Nationality[1-Indian/0-Non Indian]");
  scanf("%d",&is_Indian);
  int fee;
  printf("Are fees paid?[1-yes/0-no]");
  scanf("%d",&fee);
   if (is_Indian = 1) {
    if (fee = 1){
      if (percentage >= 35) {
      printf("You have passed the exam with %.2f marks\n",percentage * total_marks / 100);
       if (percentage >= 90) {
       printf("You have passed with distinction.\n");
       } else if (percentage >= 75) {
       printf("You have passed with first class.\n");
       } else if (percentage >= 60) {
       printf("You have passed with second class.\n");
       } else if (percentage >= 50) {
       printf("You have passed with third class.\n");
      } else {
      printf("You have passed but did not achieve any class.\n");
     }
     } else {
     printf("You have failed the exam.\n");
     }
   } else {
    printf("Please pay your fees to see your results");
   }
  } else {
    printf("fuck you ig");
  }
  return 0;
}