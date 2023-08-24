#include <stdio.h>


int main(){

    FILE* ptr;

    ptr = fopen("text.txt","r");

    char ch = getc(ptr);

    while (getc(ptr) != EOF)
    {
        putchar(ch);

        ch = getc(ptr); 
    }
    
    if(feof(ptr)){
        printf("\nThis file is successfully end.");
    }
    else{
        printf("This file is not end and error.");
    }


    fclose(ptr);


    return 0;
}