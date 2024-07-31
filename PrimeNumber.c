#include <stdio.h>

void CheckPrime(int number){

    int isPrime = 1;

    if(number ==  0 ){
        printf("your number is not prime number.");
    }
    else if(number == 1){
        printf("your number is not prime number.");
    }
    else if(number >=2){

        for(int i = 2; i <= number ; i++){

            if(number % i == 0){
                isPrime == 0;
                break;
            }

        }

        if(isPrime){
            printf("Your number is prime number");
        }
        else{
            printf("Your number is not prime number");
        }

    }

}

int main(){

    int number;
    printf("Enter your number : ");
    scanf("%d",&number);

    CheckPrime(number);
    return 0;
}