//Printing even numbers only using array

#include<stdio.h>

int main(){
 int arr[5];

 for(int i = 0; i<5; i++){
    arr[i]=i*2+2;
 }
 for(int i =0; i<5; i++){
    printf("print even number using array: %d\n", arr[i]);
 }

    return 0;
}