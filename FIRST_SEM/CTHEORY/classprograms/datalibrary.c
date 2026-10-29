#include<stdio.h>
#include<stdlib.h>
int input(int i,bool j,float price){
    int id = 0;
    int temp;
    printf("Enter Book %d ID:",i+1);
    scanf("%d",&id);
    printf("Is Book active?[1/0]:");
    scanf("%d",&temp);
    if (temp == 1){
        j = true;
    } else ( j = false);    
    printf("Price of book:");
    scanf("%f",&price);
    return id;
}
struct library
{
  int bookid;
  char author[51];
  float price;
  bool is_active;
};
int main(){
    struct library book[5];
    for (int i = 0;i<=5;i++){
        book[i].bookid = input(i,book[i].is_active,book[i].price);  
        printf("Enter Author Name:");
        scanf("%50[^\n]",book[i].author);
        printf("%d\n%s\n%s\n%s",book[i].bookid,book[i].author,book[i].price,book[i].is_active);
    }
}