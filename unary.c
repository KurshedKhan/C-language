#include <stdio.h>


int main(){

    int number = 10;
    number++;
    printf("after incrament Operator ++ : %d\n",number);
    number--;
    printf("after decreament operator -- :%d\n",number);

    int firstnumber = 20;
    printf("before increament operator ++ : %d \n",firstnumber++);
    printf("before increament operator ++ : %d \n",firstnumber++);
    printf("before increament operator ++ : %d \n",firstnumber--);

    return 0;
}