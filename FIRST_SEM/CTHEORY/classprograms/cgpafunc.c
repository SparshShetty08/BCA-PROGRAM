#include <stdio.h>
int getStudentData(int roll){                         //int declaration to return values for local storage
    printf("Enter Student Roll Number:");
    scanf("%d",&roll);
    return roll;
}
float getTotal(float marks,float total){
    total = 0;
    for (int i=1;i<=5;i++){
        do {
        printf("Enter subject %d marks:",i);          //no need for individual variables to store individual marks as their display isn't necessary
        scanf("%f",&marks);
        if (marks>100){
            printf("Enter Valid Marks");
            break;
        }
        } while (i <= 5);
        total = total + marks;
    }
    return total;                                     //any functions/codes after return is not executed as program moves on to 'int main()' function
}
float getAverage(float total,float average){
     average = total / 5;
     return average;
}
float getCGPA(float average,float cgpa){
    cgpa = average /9.5;
    return cgpa;
}
void main(){
    int roll;
    float marks,total,average,cgpa;
    for (int j=1;j<=3;j++){
      roll = getStudentData(roll);
      total = getTotal(marks,total);                  //storing value in local variable
      average = getAverage(total,average);
      cgpa = getCGPA(average,cgpa);
      printf("Student Roll.no:%d\n",roll);
      printf("Total marks: %.2f\n",total);              // declaration of local variables
      printf("Average marks: %.2f\n",average);
      printf("CGPA: %.2f\n",cgpa);
    }  
}