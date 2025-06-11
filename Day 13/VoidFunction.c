#include <stdio.h>

void Greeting(int a , int b);

int main(){

  Greeting(30,50);

  return 0;
}

void Greeting(int a , int b){

  printf("Hi, Good Morning !!!");
  int total = a + b;

  printf("total : %d",total);
}