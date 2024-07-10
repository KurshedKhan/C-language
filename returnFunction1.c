#include <stdio.h>

int sum(int a , int b){
    int total = a + b;

    return total;
}
int main(){

    int total = sum(20,40);
    printf("%d",total);
    return 0;
}