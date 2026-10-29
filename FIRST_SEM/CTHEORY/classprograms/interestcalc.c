#include <stdio.h>
int main(){
    float principal = 1000.0;
    float rateofInterest = 5.0;
    int years;
    float amount = principal;
    printf("Enter the number of years: ");
    scanf("%d", &years);
    printf("--------Interest Growth---------\n");
    for(int i = 1; i <= years; i++){
        amount = amount + (amount * rateofInterest / 100);
        printf("Year %d,Amount: Rs. %.2f\n", i, amount);
    }
    printf("--------------------------------\n");
    printf("Total amount after %d years: Rs. %.2f\n", years, amount);
    return 0;
}

















