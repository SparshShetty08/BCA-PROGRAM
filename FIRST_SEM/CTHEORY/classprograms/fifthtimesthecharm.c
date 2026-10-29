#include<stdio.h>
int main(){
    int choice;
    int i;
    int j;
    
    printf("----Welcome to my Calculator----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter your choice:");
    scanf(" %d",&choice);
    printf("Enter the first number:");
    scanf("%d",&i);
    printf("Enter the second number:");
    scanf("%d",&j);
    switch(choice){
    case 1:
        printf("The sum of %d and %d is %d\n",i,j,i+j);
        break;
    case 2:
        printf("The difference between %d and %d is %d\n",i,j,i-j);
        break;
    case 3:
        printf("The product of %d and %d is %d\n",i,j,i*j);
        break;
    case 4:
        if(j!=0){
            printf("The quotient of %d and %d is %.2f\n",i,j,(float)i/j);
        }
        else{
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    case 5:
        if(j!=0){
            printf("The modulus of %d and %d is %.2f\n",i,j,(float)(i%j));
        }
        else{
            printf("Error: Modulus by zero is not allowed.\n");
        }
        break;
      default:
        printf("Invalid choice. Please select a valid operation.\n");
    }
    return 0;
}