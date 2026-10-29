// C program to demonstrate array insertion
//Program allows to insert an integer into a specific array index. 
//Implemented using Array and functions
# include<stdio.h>
#include <stdbool.h>

//Array Size validation function
bool validateSize(int size){
if(size>0){
    return true;
}
return false;
}

// array insertion function
void insert_data_at_index(int numbers[],int newData,int position,int array_size){
    while (array_size!=position+1)
    {
        numbers[array_size-1]=numbers[array_size-2];
        array_size-=1;
    }
    numbers[position]=newData;
    
}

int main(){
    int arraySize;
    bool isValid=true;
    
    int newData,index;
    do{
        printf("Enter the array size:");
        scanf("%d",&arraySize);
        bool isValid=validateSize(arraySize);
        if(isValid){
            break;
        }
    else{
        printf("Please enter valid Array Size");
    }

    }while (isValid);
    int numbers[arraySize];
    //Array Initialization
    for(int i=0;i<arraySize-1;i++){
        printf("Input %d array element:",i+1);
        scanf("%d",&numbers[i]);
    }
    printf("Enter the new element:");
    scanf("%d",&newData);
    printf("Enter index value:");
    scanf("%d",&index);
    //insertion process to insert 'newData' at index 'index'

    insert_data_at_index(numbers,newData,index,arraySize);
   
    //printing updated array
    for(int i=0;i<arraySize;i++){
        printf("%d\t",numbers[i]);

    }

}