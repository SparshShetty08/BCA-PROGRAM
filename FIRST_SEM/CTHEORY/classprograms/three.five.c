#include <stdio.h>

int main() {
    int firstnumber;
    int secondnumber;
    int sum;
    int difference;

    printf("Enter the first number: ");
    scanf("%d", &firstnumber);

    printf("Enter the second number: ");
    scanf("%d", &secondnumber);

    sum = firstnumber + secondnumber;
    difference = firstnumber - secondnumber;

    printf("The sum of %d and %d is %d\n", firstnumber, secondnumber, sum);
    printf("The difference between %d and %d is %d\n", firstnumber, secondnumber, difference);

    return 0;
}