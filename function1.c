#include <stdio.h>

void sum(int a  , int b );

int main(){

    sum(10,20);
    return 0;
}

void sum(int a , int b){
    int total = a + b ;
    printf("Total : %d " ,total);
}