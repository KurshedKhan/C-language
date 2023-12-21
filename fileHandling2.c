#include <stdio.h>

int main(){

    FILE *fptr;

    fptr = fopen("Rajat.txt","w");

    if(fptr == NULL){
        printf("file is not open bcz not our system.");
        exit(0);
    }
    else{
        printf("file is successfully create.");
    }

    return 0;
}