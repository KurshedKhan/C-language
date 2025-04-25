#include <stdio.h>

int main(){

  int loop;
  printf("How many time repeat your program : ");
  scanf("%d",&loop);

  int arr[loop];


  // this forLoop for input value in array
  for(int i = 0 ; i < loop ; i++){
    printf("Enter your values : %d : ",i);
    scanf("%d",&arr[i]);
  }

  // this forLoop for output value from array
  for(int i = 0 ; i < loop ; i++){
    printf("Number : %d\n",arr[i]);
  }


  return 0;
}