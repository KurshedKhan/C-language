#include <stdio.h>

int main(){

    // int arr2[2][5] = {
    //                 { 23,34,56,23,67 },
    //                 { 54,34,53,75,90}  
                     
    //                  };
    
    // for( int i = 0; i < 2 ; i++ ) {

    //     for( int j = 0 ; j < 5 ; j++ ) { 

    //         printf("This array is 2D : %d\n", arr2[i][j]);
    //     }

    // }

    
    char arr_char[4] = {'a','b','c','\0'};

    int i = 0;

    while(arr_char[i]){

        printf("%c\n",arr_char[i++]);
    }
    
    return 0;
}