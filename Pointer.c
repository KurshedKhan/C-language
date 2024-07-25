#include <stdio.h>

int main(){

    int num = 10;

    int *num_ptr;
    num_ptr = &num;

    char ch = 'a';

    char *ch_ptr = &ch;

    printf("Variable Value : %d\n",num);
    printf("Address of variable : %p\n", num);
    printf("value of pointer : %d\n",*num_ptr);
    printf("Address of pointer : %p\n",*num_ptr);
    printf("Address of pointer : %p\n",num_ptr);

    printf("Character Pointer : %d\n ",*ch_ptr);

    return 0;
}