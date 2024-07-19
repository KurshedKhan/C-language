#include <stdio.h>

int main(){

    int arr[6];

    int num_arr[10] = {10,20,30,40,50,60};

    // printf("%d ",num_arr[2]);
    // printf("%d",num_arr[7]);

    for (int i = 0; i < 6; i++)
    {
       arr[i] = ( i*i + 2 );
    }
    
    for(int i = 0 ; i < 6 ; i++){
         printf("%d element of arr : %d\n",i ,arr[i]);
    }

    return 0;
}