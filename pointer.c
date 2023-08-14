#include <stdio.h>



int main(){

    // variable ==>with use of pointer
    int var = 10;

    int* ptr ;// decalaration of the pointer.

    ptr = &var;

    printf("print the variable value : %d\n",var);

    printf("Print the pointer value : %d\n",*ptr);

    printf("Print the address of the pointer %p\n",ptr);

    printf("Print the address of variable : %p\n",var);

    printf("Print the address pointer use of variable : %p",*ptr);
    return 0;
}