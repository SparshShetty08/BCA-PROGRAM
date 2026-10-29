#include<stdio.h>
int main(){
    int age;
    int Is_Indian;
    int testcleared;
    int feepaid;

    printf("------Welcome to DL test-------\n");
    printf("Enter Nationality [1-Indian/0-NonIndian]: ");
    scanf("%d", &Is_Indian);
    if (Is_Indian == 1) {
        printf("Enter your age: ");
        scanf("%d", &age);
        if (age >= 18 && age <= 60) {  
            printf("Whether test is cleared [1/0]: ");
            scanf("%d", &testcleared);
            if (testcleared == 1) {
                printf("Enter Fee Paid [500]: ");
                scanf("%d", &feepaid);
                if (feepaid == 500) {
                    printf("Age: %d\n", age);
                    printf("Nationality: %d\n", Is_Indian);
                    printf("Test Cleared: %d\n", testcleared);
                    printf("Fee Paid: %d\n", feepaid); 
                    printf("DL issued successfully\n");
                } else {
                    printf("DL cannot be issued for - fee not paid\n");
                }
             } else {
                printf("DL cannot be issued for - test not cleared\n");
             }
        } else {
            printf("DL cannot be issued for - inappropriate age\n");
        }
    } else {
        printf("DL cannot be issued for - not Indian\n");
    }
    return 0;
}