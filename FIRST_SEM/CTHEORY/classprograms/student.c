#include <stdio.h>
int input() {
    int roll;
    printf("Enter Roll No: ");
    scanf("%d", &roll);
    return roll;
}
float marks(float m[5]){
    int count = 0;
    float total,average,percentage = 0;
    printf("Enter Subject 1 marks: ");
    scanf("%f", &m[0]);
    printf("Enter Subject 2 marks: ");
    scanf("%f", &m[1]);
    printf("Enter Subject 3 marks: ");
    scanf("%f", &m[2]);
    printf("Enter Subject 4 marks: ");
    scanf("%f", &m[3]);
    printf("Enter Subject 5 marks: ");
    scanf("%f", &m[4]);
    for (int i = 0;i <= 4;i++){
        if (m[i] > 25 ){
         } else {count++;}
        total += m[i];
    average = total/5;
    percentage = (total/500)*100;
    if (count != 0){
        printf("FAIL");
    } else { printf(" PASS");}
    return total,average,percentage;
}
}
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int roll[n];
    float mark[n][5];
    float total[n];
    float average[n];
    float percentage[n];
    for (int j = 0; j < n; j++) {
        printf("---Student %d---",j+1);
        roll[j] = input();
        total[j],average[j],percentage[j] = marks(mark[j]);
    }
    printf("====Student Marks====\n");
    for (int i = 0; i < n; i++) {
        printf("----Student %d----\n", i + 1);
        printf("Roll No: %d\n", roll[i]);
        for (int k = 0; k < 5; k++) {
            printf("Subject %d: %.2f\n", k + 1, mark[i][k]);
        }
        printf("Total: %.2f\n",total[i]);
        printf("Average: %.2f\n",average[i]);
        printf("Percentage: %.2f\n",percentage[i]);
    }
    return 0;
}