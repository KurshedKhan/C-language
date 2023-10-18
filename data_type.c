#include <stdio.h>

void main(){

    int number = 10;
    float decimal_number = 3.14;
    char ch = 'R';
    


    printf("Size of integer (number) : %d byte\n",sizeof(number) );

    printf("Size of decimal number : %d byte\n", sizeof(decimal_number));
    
    printf("Size of charater : %d byte", sizeof(ch));
    
}