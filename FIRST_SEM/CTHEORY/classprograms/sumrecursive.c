#include <stdio.h>
int sum(int n){
    if (n == 0 || n == 1){
        return 1;
    } else {
        return n + sum(n-1);
    }
}
int main() {
    int n,add;
    printf("Enter number:");
    scanf("%d",&n);
    add = sum(n);
    printf("Sum of %d numbers is:%d",n,add);
}