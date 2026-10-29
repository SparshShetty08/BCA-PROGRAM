#include <stdio.h>
int roll; 
float marks,total,average,cgpa;                              //global declaration
void getStudentData(){          
    printf("Enter Student Roll Number:");
    scanf("%d",&roll);
}
void getTotal(){                                             // void declaration(no return)
    total = 0;
    for (int i=1;i<=5;i++){
        printf("Enter subject %d marks:",i);
        scanf("%f",&marks);
        total += marks;
    }
}
void getAverage(){
     average = total / 5;
}
void getCGPA(){
    cgpa = average /9.5;
}
void displayStudentDetails(){
    printf("Total marks: %.2f\n",total);
    printf("Average marks: %.2f\n",average);
    printf("CGPA: %.2f\n",cgpa);
}
int main(){
    for (int j=1;j<=3;j++){
      getStudentData();
      getTotal();
      getAverage();
      getCGPA();
      displayStudentDetails();
    }
    return 0;
}