#include <stdio.h>

int main(){

  int per = 100;
  int *chor;
  printf("Chor Rupees before : %d\n",*chor);
  chor = &per;
  
  printf("Person Rupees : %d\n",per);
  printf("Address of Person : %p\n",per);
  printf("Chor Rupees after : %d\n",*chor);
  printf("Address of Chor : %p",*chor);
}