#include <stdio.h>

void sum(int a , int b){

    printf("A = %d and B =  %d  is addition : %d",a,b,a+b);

}
void subtract(int a , int b){

    printf("A = %d and B = %d  is subtract : %d",a,b,a-b);

}
void multiple(int a , int b){

    printf("A = %d and B =%d  is multiple : %d",a,b,a*b);

}
void division(int a , int b){

    float c = (float)a/b;
    
    printf("A = %d and B =%d  is division : %f",a,b,c);

}



int main(){

    void (*ptr_func_arr[])(int,int) = {sum , subtract,multiple,division};

     int ch ;
     int a = 19876;
     int b = 18976;
   
    printf("Enter your number : 0 = sum; 1 = subtract ; 2 = multiple ; 3 = division : ");

    scanf("%d", &ch);

    if (ch > 3 || ch < 0) return 0;

    (*ptr_func_arr[ch])(a,b);


    return 0;
}