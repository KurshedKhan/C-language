#include <stdio.h>
#include <string.h>

int main(){

  struct Person{

    char name[20];
    int age;
    float height; 

  };


  struct Person p1 = {"Vinay kumar",25,5.11};
  // strcpy(p1.name,"Vinay kumar");
  // p1.age = 25;
  // p1.height = 5.11;

  printf("My Name is %s\n",p1.name);
  printf("My age is %d\n",p1.age);
  printf("My height is %.2f\n",p1.height);
  return 0;
}