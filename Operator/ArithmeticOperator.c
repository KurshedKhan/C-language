#include <stdio.h>

int main(){

    int a,b,c,d,e,f,g;
    printf("Arithmetic Operator : + - * /\n");

    printf("Enter a first number : ");
    scanf("%d",&a);

    printf("\nEnter a  second number :");
    scanf("%d",&b);

     c = a+b; // plus symbol
     d = a-b;  // minus symbol
     e = a*b; // multiple symbol
     f = a/b; // division symbol
    g = a%b; // %age
    printf("First Number : %d \n Second Number : %d \n Total Number : %d\n",a,b,c);
    printf("First Number : %d \n Second Number : %d \n Subtraction Number : %d\n",a,b,d);
    printf("First Number : %d \n Second Number : %d \n Multiple Number : %d\n",a,b,e);
    printf("First Number : %d \n Second Number : %d \n Division Number : %d\n",a,b,f);
    printf("First Number : %d \n Second Number : %d \n Remainder Number : %d\n",a,b,g);
    return 0;
}