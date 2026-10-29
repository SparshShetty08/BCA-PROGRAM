#include<stdio.h>
int main(){
 char s[14] = "Sparsh Shetty";
 printf("%s",s);
 printf("[%s]",s);
 char p[30];
 printf("\nenter your name:");
 fgets(p,sizeof(p),stdin);
 printf("%s",p);
 for (int i = 0;s[i] != '\0';i++){
    printf("word[%d] = %c\n",i,s[i]);
 }
}