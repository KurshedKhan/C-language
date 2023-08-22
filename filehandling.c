// Read a file in our system use of file handling.
#include <stdio.h>


int main(){

    FILE* file_pointer;

    file_pointer = fopen("my_book.txt","r");


    if(file_pointer == NULL){
        
        printf("This file is not in our system");
        
    }

    else{
        printf("This file is in the our system.");
    }


    return 0;
}