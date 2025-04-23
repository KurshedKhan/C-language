#include <stdio.h>

int main(){

  int num2 = 0; // global variable

for(int i = 1; i <= 50; i++){
  num2 += i;
  printf("number total %d\n", num2);
}
  return 0;
}