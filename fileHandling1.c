#include <stdio.h>

int main(){

    FILE *fptr;

    fptr = fopen("rajat.txt","r");

    if(fptr == NULL){
        printf("file is not open in our system");
        exit(0);
    }


    return 0;
}