#include <stdio.h>

void add(int a , int b , int c){

    int total = a + b + c ;
    printf("Total of three values : %d",total);

}
void sub(int a , int b , int c){

    int subtraction = a + b - c ;
    printf("Subtraction of three values : %d",subtraction);

}
void multi(int a , int b , int c){

    int multiplation = a * b * c ;
    printf("Multiple of three values : %d",multiplation);

}
int main(){

    void (*fun_ptr_arr[])(int, int , int) = {add,sub,multi};

    int num1,num2,num3,indexing;

    printf("Enter your first number : ");
    scanf("%d",&num1);

    printf("Enter your second number : ");
    scanf("%d",&num2);

    printf("Enter your third number : ");
    scanf("%d",&num3);
   
   printf("Enter your indexing for your program.");
   scanf("%d",&indexing);

   if (indexing > 2)
   {
     exit(0);
   }
   else{
        (*fun_ptr_arr[indexing])(num1,num2,num3);
   }
   
    
    return 0;
}