#include <stdio.h>
#include <stdbool.h>

int main(){

  // for(int i = 1 ; i <= 10 ; i++){
  //   printf("number : %d\n",i);
  // }
  
  bool infLoop = true;
  float number;

  while(infLoop){

      printf("Enter your number : ");
      scanf("%f",&number);
      printf("Prompt Value : : %f\n",number);
  }

  return 0;
}