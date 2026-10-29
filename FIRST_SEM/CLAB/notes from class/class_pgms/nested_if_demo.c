//C pgm to demo nested if else
// pgm to issue DL
#include<stdio.h>    //includes 'stdio.h' to this pgm
int main(){         //execution starts from here
 int age;
 int isIndian;      // 1-indian; 0- Non-indian
 int isTestCleared;  // 1 - cleared; 0-Not cleared
 int paidFee;
 printf("-----Welcome to DL Issue System-----\n");

//core logic to determine certificate can be issued or not
//nested if statement - Nationality->age->test clearance->fee payment

printf("Enter your age:");
scanf("%d",&age);
printf("Enter Nationality:[1-Indian;0-Non Indian]");
scanf("%d",&isIndian);
printf("Has driving test cleared:[1-cleared;0-not cleared]");
scanf("%d",&isTestCleared);
printf("Has driving test fee paid:[1-paid;0-not paid]");
scanf("%d",&paidFee);

//nested if
if(isIndian == 1){
    if(age >= 18){              //nested if
        if(isTestCleared == 1){
            if(paidFee == 1){
                    printf("DL Can be issued.\n");
            }
            else{
                printf("DL can't be issued.\n Reason: Fee Not Paid\n");
            }
        }
        else{
            printf("DL can't be issued.\n Reason: Test Not Cleared\n");
        }
    }else{
        printf("DL can't be issued.\n Reason: Not Major\n");
    }

}
else{
    printf("DL can't be issued.\n Reason: Not an Indian\n");
}


printf("Program Terminated..");


}
