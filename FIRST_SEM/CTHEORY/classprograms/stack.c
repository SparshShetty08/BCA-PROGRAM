#include<stdio.h>
#include<stdbool.h> 
int input(){
    int x;
    printf("1.Push data\n");
    printf("2.Pop data\n");
    printf("3.Display stack\n");
    printf("4.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&x);
    return x;
}
void dec(){
    printf("--------------\n");
}
void push(int i,int temp,int top,int stack[]){
    if (top == i - 1){
        printf("stack is full:Overflow\n");
} else {
        printf("Enter Data:");
        scanf("%d",&temp);
        stack[++top] = temp;
        printf("%d pushed to top of array\n",temp);
        temp = 0;
 }
}
void pull(int temp,int top,int stack[]){
    if (top == -1){
        printf("Stack is empty(underflow)\n");
    } else {
        temp = stack[top--];
        printf("%d called from top of array\n",temp);
        temp = 0;
    }
}
void display(int top,int stack[]){
    printf("Stack from top to bottom:\n");
            for (int i = top;i >= 0;i--){
                printf("%d\n",stack[i]);
            }
}
int main(void){
    int i;
    printf("Enter size of STACK:");
    scanf("%d",&i);
    int stack[i],top = -1;
    int x;
    int temp = 0;
    x = input();
    while (true) {
        if (x == 1)
        {
            push(i,temp,top,stack);
        }
        else if (x == 2)
        {
            pull(temp,top,stack);
        }
        else if (x == 3)
        {
            display(top,stack);
        }
        else if (x == 4)
        {
            break;
        }
        else {
            printf("Enter Valid Choice.\n");
        }
        dec();
        x = input();
    }
}