#include <stdio.h>

int add(int a , int b); // function prototype
int sub(int a , float b);

int main(){

  int result = add(10,20); // calling part of function
  printf("Calling function with return keyword : %d\n",result);
  sub(20,30.5);

  return 0;
}

// function defination
int add(int a , int b){

  int total = a + b;

  return total;

}

int sub(int a , float b){

  float sub1 = b - a;
  printf("%f\n",sub1);
}