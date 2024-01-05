#include <stdio.h>

/*
scanf() method ===> 

    scanf(“%X”, &variableOfXType);
    1. %X = formate spacifier(String)
    2. & = address operator
    3. Variable name 
    4. sparator (,) {between formate spacifier and address opeator}



printf() method ===>

    printf(“%X”, variableOfXType); 
    1. %X = formate spacifier(String)
    2. Variable name 
    3. sparator (,) {between formate spacifier and variable}
*/

int main(){

    float decimal;
    printf("====================================\n");
    printf("Enter a float number :");
    scanf("%f",&decimal);
    printf("Get Flaoting Number : %f\n",decimal);
    printf("====================================");
    int a ;
    printf("\nEnter a number : ");
    scanf("%d",&a);
    printf("Get Data : %d",a);
    printf("\n====================================\n");

    return 0;
}