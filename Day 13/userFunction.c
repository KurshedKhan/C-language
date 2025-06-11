#include <stdio.h>

float userInput();

int main(){

  float myMarks = userInput();
  printf("my marks is : %.2f",myMarks);

  return 0;
}

float userInput(){

  float marks;
  printf("Enter your marks : ");
  scanf("%f",&marks);

  return marks;
};

