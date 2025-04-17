#include <stdio.h>

int main(){

  // float num1;
  // float num2;

  // printf("Enter your first and second number : ");
  // scanf("%f %f",&num1,&num2);

  // float multi = num1 * num2;

  // printf("This is number : %f",multi);

  int age ;
  char name[50];

  printf("Enter your age : ");
  scanf("%d",&age);

  printf("\nEnter your name : ");
  getchar();
  scanf("%[^\n]s",name);


  printf("my name is %s and my age is : %d",name,age);
  return 0;
}