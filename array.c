#include <stdio.h>

int main(){

   // data_type arr_name[size of array];

   int arr[5] = {10,20,30,40,50};

   // printf("Array :%d",arr[2]);

   // reassinging value in array
   arr[3] = 60;
   // Print all value use of for loop
   for(int i = 0; i < 5 ; i++){
      printf("Array : %d\n",arr[i]);
   }

   return 0;
}