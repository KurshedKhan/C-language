#include <stdio.h>

int main(){

  short int age = 21;

  age = 22;

  char name1[] = "mohan";

  printf("name of student  : %s\n",name1);

  char name2 = 'G';
  name2 = 'S';

  printf("%c",name2);

  int stock = 5000;

  int roll = 101;

  float salary = 10500.38;

  double income = 5865874.84;

  char letter = 'G';

  char name[] = "Gaurav Choudhary";



  printf("\n--------------------------\n");
  printf("my stock is : %d\n",stock);
  printf("my roll is : %i\n",roll);
  printf("my salary is : %f\n",salary);
  printf("my income is : %lf\n",income);
  printf("my letter is : %c\n",letter);
  printf("my name is : %s\n",name);
  printf("my age is : %hd\n",age);
  printf("\n--------------------------\n");
  return 0;
}