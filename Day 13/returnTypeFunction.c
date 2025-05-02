#include <stdio.h>

int addition(int, float);

int main(){

  int num1;
  float num2;

  printf("Enter your first number : ");
  scanf("%d",&num1);

  printf("Enter your second number : ");
  scanf("%f",&num2);

  float sum = addition(num1 , num2);

  printf("Sum of values : %f",sum);

  return 0;
}

int addition(int num1, float num2){

  float total = num1 + num2;

  return total;

}