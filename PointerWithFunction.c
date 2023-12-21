#include <stdio.h>

void swap(int *a , int *b){

    int temp ;
    temp = *a;
    *a = *b ;
    *b = temp;
}

int main(){

    int a = 10;
    int b = 20;

    printf("Before swaping the value  a : %d, b : %d \n",a,b);

    swap(&a,&b);

    printf("After swaping the value a : %d, b : %d ", a,b);
}