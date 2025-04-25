#include <stdio.h>

int main(){

  int marks[5]; // only declaration this line

  int number[5] = {10,20,30,40,50};

  printf("%d\n",number[2]);

  printf("=================\n");

  int loop;
  printf("How many time repeat your program : ");
  scanf("%d",&loop);

  for(int i = 0 ; i < loop ; i++){
    printf("%d\n",number[i]);
  }

  return 0;
}