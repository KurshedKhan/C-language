#include <stdio.h>

int main(){


     // declaration of the pointer 
     //  ( * ) dereference operator 
     //  ( & ) addressof operator

    int num = 10;
    int *ptr;
    ptr = &num;


    printf("Print the value our variable %d\n",num);
    printf("Print the value our variable throw pointer %d\n",*ptr);
    printf("Print the address our variable %p\n",num);
    printf("Print the address  Pointer %p\n",ptr);
    printf("Print the address our variable throw pointer %p",*ptr);
 
    return 0;
}