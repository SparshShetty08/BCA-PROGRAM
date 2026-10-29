#include<stdio.h>
int main(){
int N,Roll,R;
int i = 1;
char C;
printf("Enter number of students:");
scanf("%d",&N);
if(2<=N<=10){
  printf("\n");
 int S1 = 101;
 int S2 = 201;    
 do{
     printf("--- Student %d---\n",i);
     printf("Enter Roll number:");
     scanf("%d",&R);
     // Roll = R;
     printf("Enter Category(R/B):");
     scanf("%s",&C);
     printf("Roll No: %d,",R);
     printf("Category: %s,",C);
     if(C== 82){
        printf("Seat:%d,",S1);
        S1++;
     } else if(C=='B'){
        printf("Seat:%d,",S2);
        S2++;
     }
     if(Roll%2 == 0){
       printf("Hall: A(Left Wing)\n");
     } else if(Roll%2 != 0) {
       printf("Hall: B(Right Wing)\n");
     }
     i++;
    } while (i <= N);
} else {
    printf("Enter Valid number of students.");
}
return 0;
}