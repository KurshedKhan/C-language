#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE* file_pointer;

    file_pointer = fopen("mybook.txt","w");

    if(file_pointer == NULL){

        printf("This file is not in our computer system.");
        exit(0);
    }

    else{
        printf("This file is create successfully in our system.");
    }

    return 0;
}