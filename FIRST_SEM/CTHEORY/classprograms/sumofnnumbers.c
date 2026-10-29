#include <stdio.h>
int main() {
    int n, m, sum = 0;
    printf("Enter the starting number: ");
    scanf("%d", &m);
    printf("Enter the ending number: ");
    scanf("%d", &n);
    if (m > n) {
          printf("Starting number should be less than or equal to ending number.\n");
          return 1;  // Exit the program with an error code
    } else {
        for (int i = m; i <= n; i++) {
        sum += i;  // sum = sum + i
        }
    }
    printf("Sum of numbers from %d to %d is: %d\n", m, n, sum);
    return 0;
}
