#include <stdio.h>


int main(){

    int end = 10;

    for(int row = 0 ; row < end ; row++){
        
        for(int  column = 0 ; column < row ; column++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}