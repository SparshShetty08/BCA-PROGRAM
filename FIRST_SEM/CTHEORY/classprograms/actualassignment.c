#include<stdio.h>
int main(){
    float percentage;
    scanf("%f", &percentage);
    int total_marks = 100;
    printf("Your marks are: %.2f\n", percentage * total_marks / 100);
    return 0;
}