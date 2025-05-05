#include <stdio.h>

int PrimeNumber(int number); // function prototype // declaration

int main(){

  int num;
  printf("Enter a number for checking prime number : ");
  scanf("%d",&num);

  int result = PrimeNumber(num);

  if(result == 0){
    printf("Numer is not prime number.");
  }
  else{
    printf("Number is prime number.");
  }

}

int PrimeNumber(int num){

  if(num <= 1){
    return 0;
  }
  else{
    for(int i = 2 ; i < num ; i++){
      if(num%i == 0 ){
        return 0;
      }
    }
    return 1;
  }
}