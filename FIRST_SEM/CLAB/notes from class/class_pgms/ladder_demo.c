#include<stdio.h>


int main(){
    // int mymark;   // declaration
    // mymark=76;    //initialization

    int mymark=76;  //declaration and initialisation

    if(mymark >=90){
        printf("Grade : Distinction");
    }
    else if(mymark >=75){
        printf("Grade : First Class");
    }
    else if(mymark >=60){
        printf("Grade : Second class");
    }
    else{
        printf("Grade : PASS");
    }
    printf("Program terminated..");
}