#include <stdio.h>

int main(){

    int a,b,c;
    printf("Arithmetic Operator : + - * /\n");

    printf("Enter a first number : ");
    scanf("%d",&a);

    printf("\nEnter a  second number :");
    scanf("%d",&b);

     c = a+b;

    printf("First Number : %d \n Second Number : %d \n Total Number : %d",a,b,c);
    return 0;
}