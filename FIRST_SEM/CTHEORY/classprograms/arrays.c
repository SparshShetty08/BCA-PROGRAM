#include<stdio.h>
int number(int i){
  printf("Enter number of students:");
  scanf("%d",&i);
  return i;
}
float total(int i, int sub[6],int totals){
    totals = 0;
    for (int i=0;i<5;i++){ 
     printf("Enter Subject %d Marks:",i+1);
     scanf("%d" , &sub[i]);
     if (sub[i] > 100){
        printf("Enter valid marks.\n");
        sub[i] = 0;
        i--;
     }
     totals = totals + sub[i];
    }
    for (int j=0;j<5;j++){
     printf("Subject %d:%d\n",j+1,sub[j]);            //called Array traversal
    }
    printf("Total marks:%d",totals);
    return totals;
}
float avg(totals){
    float average = totals/5;
    return average;
}
float percentage(totals){
    float percent = (totals*100)/100;
    return percent;
}
void students(){
    int sub[6] = {0};   //size
    int i = number(i);
    for (int j;j <= i;j++){
     int rollno[] = {0};
     printf("Enter Student Roll no:");
     scanf("%d",&rollno[j]);
     float totals,rollno[6] = total(i,sub[6],total);
     printf("Average marks:%.2f",avg(totals));
     printf("Percentage:%.2f",percentage(totals));
    }
}






































































































































































































































void central(){
  printf("uwu");
}


int main(){
    students();
    central();
    return 0;
}