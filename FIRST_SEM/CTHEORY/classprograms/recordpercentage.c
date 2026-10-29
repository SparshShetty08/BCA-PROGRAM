#include <stdio.h>
float addition(float marks, float total, float average, float percentage){
    total += marks;
    average = total / 5;
    percentage = (total / 500) * 100; 
    return total,average,percentage;
}
int main(){
    int roll;
    float marks,total,average,percentage;
    total = 0;
    average = 0;
    percentage = 0;
    for (int i = 1;i<=3;i++){
     printf("Enter details of Student %d\n",i);
     printf("Enter roll number: ");
     scanf("%d",&roll);
     for (int j=1;j<=5;j++){
          printf("Enter marks: ");
          scanf("%f",&marks);
          total,average,percentage = addition(marks,total,average,percentage);
     }
    printf("Total{%d}: %.2f\n",i, total);
    printf("Average{%d}: %.2f\n",i, average);
    printf("Percentage{%d}: %.2f\n",i, percentage);
    }
    return 0;
}