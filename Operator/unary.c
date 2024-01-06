#include <stdio.h>

/*
    unary operator :
            1.Increment Operator (++)
                1.prefix Increment Operator (++a) a = a+1
                2.postfix Increment Operator (a++) a = a, system = a+1
            2.Decrement Operator (--)
                1.prefix Decrement Operator (--a) a = a-1
                2.postfix Decrement Operator (a--) a = a, system = a-1
*/

int main(){

    int a = 10;
    printf("before prefix Increment : %d\n",a);
    // printf("after prefix Increment %d\n",++a);
    printf("after postfix Increment %d\n",a++); //a = 10 system = 11
    printf("variable a :%d\n",a);

    int b = 20;
    printf("before prefix Decrement : %d\n",b);// b = 20;
    printf("after prefix Decrement %d\n",--b);  // b = 19;
    printf("after postfix Decrement %d\n",b--); //a = 19 system = 18
    printf("variable b :%d\n",b); // a = 18

    return 0;
}