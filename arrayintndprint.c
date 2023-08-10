#include<stdio.h>

int main(){
    
      int arr[5];

      for (int i = 0 ; i < 5 ; i++){
        arr[i] = i * 2 + 1;
      }

      for (int i = 0 ; i < 5 ; i++){
        printf("Print odd number, use of array : %d\n",arr[i]);
      }

     return 0;

}