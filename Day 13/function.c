#include <stdio.h>

void addition(int a , int b); // function declaration // function prototype

int main(){

  addition(20,50); // function calling part

  return 0;

}

// function defination
void addition(int a , int b){

  int total;

  total = a + b;

  printf("%d",total);

}