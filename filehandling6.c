// This program open,read,close

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

    FILE* file_pointer;

    char file_data[300];

    file_pointer = fopen("helloWorld.c","r");


    if(file_pointer == NULL){
        
        printf("File does not exist");

    }

    else{

        printf("This file is open :\n\n");

        while(fgets(file_data,300,file_pointer) != NULL)
        {

            printf("%s",file_data);
        }

        fclose(file_pointer);
        printf("\n\nThis file successfully open , read, close. ");
    }


    return 0;
}