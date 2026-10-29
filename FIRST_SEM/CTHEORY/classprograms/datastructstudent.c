#include<stdio.h>
struct students{
   int registration;
   char name[51];
   float marks[3];
   float total;
   float average;
   float percentage;
};
float total(float marks,float total){
    total += marks;
    return total;
}
float percentage(float total){
    float percent;
    percent = (total*100)/300;
    return percent;
}
float average(float total){
    float average = total/3;
    return average;
}
void input(struct students student[],int n){
    for (int i = 0;i<n;i++){
        float tot = 0;
        printf("-----Student %d-----",i+1);
        printf("\nEnter Registration Number:\n");
        scanf("%d",&student[i].registration);
        printf("Enter Student Name:\n");
        scanf(" %s",student[i].name);
        for (int j = 0;j<3;j++){
            printf("Enter Subject %d marks:\n",j+1);
            scanf("%f",&student[i].marks[j]);
            tot = total(student[i].marks[j],tot);
        }
        student[i].total = tot;
        student[i].percentage = percentage(tot);  
        student[i].average = average(tot);  
        printf("\n-------------------\n");    
    }
}
void display(struct students student[],int n)
{   
    printf("=====STUDENT DETAILS=====");
   for (int k=0;k<n;k++){
        printf("\n-----Student %d-----",k+1);
        printf("\nRegistration Number:%d",student[k].registration);
        printf("\nStudent Name:%s",student[k].name);
        for (int p=0;p<3;p++){
            printf("\nSubject %d marks:%.2f",p+1,student[k].marks[p]);
        }
        printf("\nTotal Marks:%.2f",student[k].total);
        printf("\nPercentage:%.2f",student[k].percentage);
        printf("\nAverage Marks:%.2f",student[k].average);
   }
}
void displaytabular(struct students student[], int n)
{
    printf("===== STUDENT DETAILS =====\n");
    printf("%-10s %-20s %8s %8s %8s %8s %10s %10s\n",
           "Reg No", "Name", "Sub 1", "Sub 2", "Sub 3",
           "Total", "Percentage", "Average");
    printf("--------------------------------------------------------------------------------\n");
    for (int k = 0; k < n; k++) {
        printf("%-10d %-20s %8.2f %8.2f %8.2f %8.2f %10.2f %10.2f\n",
               student[k].registration,
               student[k].name,
               student[k].marks[0],
               student[k].marks[1],
               student[k].marks[2],
               student[k].total,
               student[k].percentage,
               student[k].average);
    }
}
int main(){
    int n;
    printf("Enter number of students:");
    scanf("%d",&n);
    struct students student[n];  //if number of students is fixed,use global declaration for student structure variable
    input(student,n);
    int i = 0;
    printf("Display in tabular format?[1/0]:");
    scanf("%d",&i);
    if (i == 1){
        displaytabular(student,n);
    } else {
    display(student,n);
    }
}