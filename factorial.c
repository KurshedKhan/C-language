#include<stdio.h>

int main(){

    int number , i , factorial = 1;

    printf("Enter number to find factorial: ");
    scanf("%d", &number);

    for(i = 1; i <= number; i++){
        
        factorial = factorial * i;
    }

    printf("\nFactorial of given number is: %d", factorial);


    return 0;
}