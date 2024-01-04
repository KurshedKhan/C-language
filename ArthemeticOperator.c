#include <stdio.h>

int main(){

    int number1;
    int number2;
    number1 = 20;
    number2 = 30;

    number1 = 50;
    int Total = (number1 % number2);

    printf("Number1 : %d , Number2 : %d = Total : %d",number1,number2,Total);

    return 0;
}