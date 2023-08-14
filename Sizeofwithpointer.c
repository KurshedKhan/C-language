#include <stdio.h>



int main(){

    int var = 10;

    int *ptr_int = &var;

    printf("Size of the integer with the pointer \t %d :byte\n",sizeof(ptr_int));

    float pi = 3.14;

    float* ptr_float = &pi;

    printf("Size of the float with the pointer \t %d : byte\n",sizeof(ptr_float));

    char alpha = 'a';
    char *ptr_char= &alpha;

    printf("Size of the character with pointer \t %d : byte", sizeof(ptr_char));




    return 0;
}