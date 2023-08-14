#include <stdio.h>


int main(){

    int var = 10;

    int *ptr = &var;
    printf("Print the normal address of pointer ; %d\n",ptr);

    ptr++;
    printf("Print the increament address of pointer ; %d\n",ptr);

    ptr--;
    printf("Print the Decreament address of pointer ; %d",ptr);




    return 0;
}