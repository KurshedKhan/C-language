#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    FILE* C_File;

    char file_data[300] = "#include<stdio.h> int main(){ printf('Hello World'); return 0; }";

    C_File = fopen("helloWorld.c" , "w");

    if(C_File == NULL){

        printf("File does not exist\n");
    }
    else{

        if(strlen (file_data) > 0 ){

            printf("file do exist\n");
            fputs(file_data , C_File);
            fputs("\n", C_File);
        }
        printf("File was created");
    }


    return 0;
}
