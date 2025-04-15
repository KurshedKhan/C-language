#include <stdio.h>

int globalVariable = 100;

void display(){
  printf("outside of the function : %d\n",globalVariable);
}

int main(){

  display();
  printf("Global variable : %d",globalVariable);

  return 0;
}