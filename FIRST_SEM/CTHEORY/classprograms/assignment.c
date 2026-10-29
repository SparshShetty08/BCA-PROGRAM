#include<stdio.h>
int main(){
    int marks;
    int total_marks = 100;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    printf("Your percentage is: %.2f%%\n", (float)marks / total_marks * 100);
    return 0;
}