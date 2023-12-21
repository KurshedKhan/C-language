#include <stdio.h>
#include <string.h>
int main(){

    FILE* fptr;

    char content[50];

    fptr = fopen("Rajat.txt","r");

    if(fptr == NULL){
        printf("\nfile is not open , please check it.\n");

    } 
    else{
        printf("\n===============================\n");
        printf("\nmy file is successfully open\n");
        while(fgets(content,1000,fptr)!=NULL){
            printf("%s",content);
        }
        printf("\nwrite data in file successfully.\n");
        fclose(fptr);
        printf("\nmy file is successfull close.\n");
        printf("\n=================================\n");
    }
    return 0;
}