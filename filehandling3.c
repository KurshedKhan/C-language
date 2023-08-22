#include<stdio.h>

int main(){

    FILE* text_file;

    text_file = fopen("UFC_292.txt", "w");

    if(text_file == NULL){

        printf("The file doesn't exist in our system");
    }
    else{

        printf("File Created Succesfully!");
        fprintf(text_file, "%s", "Suga won by TKO against Sterling");
        fputc(1,text_file);
    } 

    return 0;
}