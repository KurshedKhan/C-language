#include <stdio.h>


int sum(){

    int a = 10;
    int b = 20;

    int total = a + b ;

    return total;
}
int main(){

    int total = sum();
    printf("Total of two values : %d",total);

    return 0;
}