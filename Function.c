#include <stdio.h>

// function defination
int add(int a , int b , int c){

    int result ;

    result = a + b + c;

    return result;
}



int main(){
   
    printf("Hello World ... !\n");
    
    int num1 , num2 , num3 ;

    printf("Enter your first number : ");
    scanf("%d",&num1);

    printf("Enter your Second number : ");
    scanf("%d",&num2);

    printf("Enter your Third number : ");
    scanf("%d",&num3);

    int Total = add(num1,num2,num3);
    float div = Total/2 ;

    printf("Total of values : %d\n",Total); 
    printf("Division of your values : %f",div);


    return 0;
}