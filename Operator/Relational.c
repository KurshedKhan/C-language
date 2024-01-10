#include <stdio.h>

/*
    The relational operators in C are used for the comparison of 
    the two operands. All these operators are binary operators 
    that return // true or false values // as the result of comparison.

        1.less than ==> (<)
        2.greater than ==> (>)
        3.less than or equal to ==> (<=)
        4.greater than or equal to ==> (>=)
        5.Equal to ==> (==)
        6.Not Equal to ==> !=

    Note : 1 = true
           0 = false
*/

int main(){

    int a = 10;
    int b = 10;

    printf("\n==================================\n");

    printf("less than Relation Oprator : %d\n",a<b);
    printf("greater than Relation Operator : %d\n",a>b);
    printf("greater than and equal to Relation Operator : %d\n",a>=b);
    printf("less than and equal to Relation Operator : %d\n",a<=b);
    printf("equal to  Relation Operator : %d\n",a==b);
    printf("Not equal to Relation Operator : %d\n",a!=b);

    printf("\n==================================\n");

    return 0;
}