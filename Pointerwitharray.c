#include <stdio.h>



int main(){

    int arr[4] = {10,20,30,40};

    arr[1] = 100;
    
    int *ptr_arr = arr;

    for (int i = 0 ; i < 4 ; i++){

        printf("Values of array : %d\n",ptr_arr[i]);


    }
        printf("Address of the array_pointer : %p",*ptr_arr);

    return 0;
}