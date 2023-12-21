#include <stdio.h>

int main(){

   // 1.integer Pointer
    int *ptr;


    // 2. array with pointer
    int arr[5] = {2,3,4,2,4};
    int *arrptr = arr;

    printf("Array value %p",arrptr);


    

    return 0;
}