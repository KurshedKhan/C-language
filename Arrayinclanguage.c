#include <stdio.h>

int main(){

    // What is the Array in the C language ?
    // < Data-type> <name of array > [Size] ==> Declaration of the array
    // This array is one D......

    // int arr[5]; //Declaration of array

    // arr[0] = 34;
    
    // printf("This is the arr %d\n",arr[0]);

    // arr[0] = 567;

    // printf("This is the arr second value : %d ", arr[0]);


    // int arr1[7] = {34,56,34,67,32}; 


    int arr1[5];

    for(int i = 0; i < 5 ;i++){

        printf("This array is :%d\n",i);

        scanf("%d",&arr1[i]);
    }

    
    return 0;

}
