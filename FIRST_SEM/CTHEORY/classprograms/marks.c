#include<stdio.h>
int main(){
int math[10],python[10],dbms[10];
float percentage[10];
int studentid[10] = {101,102,103,104,105};
int i = 0;
do {
        printf("Enter Marks of Student %d:\n",i+1);
        printf("Enter Math marks:\n");
        scanf("%d",&math[i]);
        printf("Enter Python marks:\n");
        scanf("%d",&python[i]);
        printf("Enter DBMS marks:\n");
        scanf("%d",&dbms[i]);
        percentage[i] = (math[i]+python[i]+dbms[i])/3.0;
        i++;
    } while (i < 5);
    printf("-------------------------------\n");
    printf("Student ID\tMath\tPython\tDBMS\tPercentage\n");
    for (int j = 0; j < 5; j++) {
        printf("%d\t\t%d\t%d\t%d\t%.2f\n",studentid[j],math[j],python[j],dbms[j],percentage[j]);
    }
return 0;
}