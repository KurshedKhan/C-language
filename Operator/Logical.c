#include <stdio.h>

/*

    Logical Operator:
        1.&& And Opertor (both are true.)
        2.|| Or Operator (only one true)
        3.! Not Operator (opposite condition)
            3.1 ==>  true ==> false
            3.2 ==> false ==> true

*/
int main(){

    int a = 10;
    int b = 30;
    int c = 20;

    printf("And Operator %d\n",((a < b) && (c < a))); // 0
    printf("And Operator %d\n",((a < b) || (c < a))); // 1
    printf("And Operator %d\n",((a < b) && (c > a))); // 1
    printf("Not Operator %d\n",(!(a < c))); // 0

    return 0;
}