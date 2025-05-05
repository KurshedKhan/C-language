#include <stdio.h>

double factorial(double num);

int main(){

  double num;
  printf("Enter a number for resulting factorial number : ");
  scanf("%lf",&num);

  double result = factorial(num);

  printf("Factorial Value : %lf",result);

  return 0;
}

double factorial(double num){

  if(num == 0){
    return 1;
  }
  else{
    return num * factorial(num-1);
  }
}