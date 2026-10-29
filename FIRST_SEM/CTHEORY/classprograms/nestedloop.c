#include <stdio.h>
int main()
{
  int rows;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  for (int i = rows; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      if (i == 5 && j == 3 || i == 3 && j == 2) {   //remove if else statement to remove spaces
        printf(" ");
      } else {
        printf("%d", j);
      }
    }
    printf("\n");
  }
  return 0;
}