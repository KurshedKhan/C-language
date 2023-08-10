#include<stdio.h>


void arr_function(int arr[]){

    for ( int i = 0; i < 5 ; i++ ){
        printf("%d\n",arr[i]);
    }

}

void main(){
    
    int arr[5] = {35,67,98,34,54};

    arr_function(arr);


  
}