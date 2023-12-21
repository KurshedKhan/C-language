#include <stdio.h>


int main(){

    int twod[3][2] = {10,20,30,40,50,60};

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            printf("%d ",twod[i][j]);
        }
        printf("\n");
    }
    return 0;
}