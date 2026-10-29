#include <stdio.h>
int linearsearch(int i[], int x, int y){         //array,array size,search element/key data
    for (int j = 0; j < x; j++){
        if (i[j] == y){
            return j;
        }
    }
    return -1;
}
int arraysort(int i[], int x){
     for (int k = 0; k < x - 1; k++){
         for (int l = 0; l < x - k - 1; l++){
             if (i[l] < i[l + 1]){
                 int temp = i[l];
                 i[l] = i[l + 1];
                 i[l + 1] = temp;
             }
         }
     }
}
int binarysearch(int i[], int x, int y){
    int low = 0;
    int high = x - 1;
    int temp[1] = {-1};
    int  j= 0;
     do{
        int mid = (low + high) / 2;
        if (i[mid] == y){
            temp[0] = mid;
            j++;
        } else if (i[mid] < y){
            low = mid - 1;
        } else {
            high = mid + 1;
        }
    } while (low <= high && temp[0] == -1);
    if (temp[0] != -1) {
        return temp[0];
    }
    return -1;
}
int main(){
    int n = 0;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int i[n];
    for(int l = 0;l < n;l++){
        printf("Enter %d element of the array:\n", l + 1);
        scanf("%d",&i[l]);
    }

    arraysort(i,n);
    for (int a = 0;a < n;a++){
         printf("%d \n",i[a]);
    }
    int search_element;
    printf("Enter the element to search for: ");
    scanf("%d", &search_element);
    int result1 = linearsearch(i, n, search_element);
    int result2 = binarysearch(i, n, search_element);
    if (result1 != -1) {
        printf("Element found at index %d (linear search)\n", result1);
    } else {
        printf("Element not found (linear search)\n");
    }
    if (result2 != -1) {
        printf("Element found at index %d (binary search)\n", result2);
    } else {
        printf("Element not found (binary search)\n");  
    }
    return 0;
}