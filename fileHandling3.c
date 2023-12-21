#include <stdio.h>
#include <string.h>



int main(){

    FILE* fptr;

    char content[50] = "My Name is Rajat Kumawat.";

    fptr = fopen("Rajat.txt","w");

    if(fptr == NULL){
        printf("\nfile is not open , please check it.\n");

    } 
    else{
        printf("\n===============================\n");
        printf("\nmy file is successfully open\n");
        if(strlen(content) > 0){
            fputs(content,fptr);
            fputs("\n",fptr);
        }
        printf("\nwrite data in file successfully.\n");
        fclose(fptr);
        printf("\nmy file is successfull close.\n");
        printf("\n=================================\n");
    }
    return 0;
}