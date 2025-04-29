#include <stdio.h>

int main(){

  int loop = 5;
  int arr[6] = {10,20,30,40,50};

  // manually shifting element in array
  for(int i = loop ; i > 0 ; i--){
    arr[i] = arr[i - 1];
  }
  arr[0] = 100;
  loop++;

  for(int i = 0 ; i < loop ; i+=1){
    printf("%d is array position and Element is : %d\n",i,arr[i]);
  }
  return 0;
}