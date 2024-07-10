#include <stdio.h>

void sum(int a  , int b );
void sub(int a , int b);
void mul(int a , int b);
void div(int a , int b);

void seprate(){
    printf("\n=============================\n");
}
int main(){

    int a , b ;
    printf("Enter your first number : ");
    scanf("%d",&a);
    printf("Enter your second number : ");
    scanf("%d",&b);

    sum(a,b);
    seprate();

    sub(a,b);
    seprate();

    mul(a,b);
    seprate();

    div(a,b);
    return 0;
}

void sum(int a , int b){
    int total = a + b ;
    printf("Total : %d " ,total);
}

void sub(int a , int b){
    int sub1 = b - a ;
    printf("Total : %d " ,sub1);
}
void mul(int a , int b){
    int multiple = a * b ;
    printf("Total : %d " ,multiple);
}
void div(int a , int b){
    float division = b/a ;
    printf("Total : %f " ,division);
}

