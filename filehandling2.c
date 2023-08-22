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
        printf("This file will be create and push the data. successfully run our code.");

        fprintf(file_pointer,"%s","My Name is Nakshatrasingh . my age is 21.");

        fputc(1,file_pointer);
    }

    return 0;
}