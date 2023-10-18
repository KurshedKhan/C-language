#include <stdio.h>

int main(){

    int a = 10;
    int b = 20;

    printf("a : : %d\n",a);

    a = 30; //reassign value of variable a ;

    printf("a is changed : %d\n",a);


    // += plus and assign operator.

    b %= a;// b = b % a;

    printf("a is minus and assign : %d",b);


    return 0;
}
