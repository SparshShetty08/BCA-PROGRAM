#include <stdio.h>
void main()
{
    int    i1, i2;
    float  f1, f2;
    double d1, d2;
    char   c1, c2;
    printf("Enter two integers: ");
    scanf("%d %d", &i1, &i2);
    printf("Enter two float numbers: ");
    scanf("%f %f", &f1, &f2);
    printf("Enter two double numbers: ");
    scanf("%lf %lf", &d1, &d2);
    printf("Enter two characters: ");
    scanf(" %c %c", &c1, &c2);
    printf("--- int: %d and %d ---\n", i1, i2);
    printf("%-18s: %d\n", "Addition",       i1 + i2);
    printf("%-18s: %.2f\n", "Addition",     f1 + f2);
    printf("%-18s: %.4f\n", "Addition",       d1 + d2);
    printf("%-18s: %d\n", "Addition",       c1 + c2);

    printf("%-18s: %d\n", "Subtraction",    i1 - i2);
    printf("%-18s: %.2f\n", "Subtraction",    f1 - f2);
    printf("%-18s: %.4f\n", "Subtraction",    d1 - d2);
    printf("%-18s: %d\n", "Subtraction",    c1 - c2);

    printf("%-18s: %d\n", "Multiplication", i1 * i2);
    printf("%-18s: %.2f\n", "Multiplication", f1 * f2);
    printf("%-18s: %.4f\n", "Multiplication", d1 * d2);
    printf("%-18s: %d\n", "Multiplication", c1 * c2);
    if (i2 != 0) {
        printf("%-18s: %d\n",   "Division", i1 / i2);
        printf("%-18s: %d\n",   "Modulus",  i1 % i2);
    }
    if (f2 != 0) {
        printf("%-18s: %.2f\n", "Division", f1 / f2);
        printf("%-18s: %.2f\n", "Modulus", f1 % f2);
    }
    if (d2 != 0) {
        printf("%-18s: %.4f\n", "Division", d1 / d2);
        printf("%-18s: %.4f\n", "Modulus", d1 % d2);
    }
    if (c2 != 0) {
        printf("%-18s: %d\n", "Division", c1 / c2);
        printf("%-18s: %d\n", "Modulus",  c1 % c2);
    }
    if (i2 == 0 || f2 == 0 || d2 == 0 || c2 == 0){
        printf("Division and modulus by 0 is not allowed");
    }
}