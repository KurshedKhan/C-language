#include <stdio.h>

int main(){

    int a = 20;

    if( a == 10){
        int a = 18;
        if(a >= 18){
            printf("you are eligible for voter");
        }
        else{
            printf("you are not eligible for voter");
        }
    }else{
        printf("This condition is false");
    }

    return 0;
}