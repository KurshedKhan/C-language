#include <stdio.h>

/*
    Assignment Operator :
        1.assign Operator (=)
        2.plus Assign Operator (+=)
        3.minus Assign Operator (-=)
        4.division Assign Operator (*=)
        5.remainder Assign Operator (/=)
*/
int main(){

    int a = 10; // assignment Operator 
    int b = 20;

    int c = (a += b);
    int d = (a -= b);
    int f = (a *= b);
    int g = (a /= b);
    int h = (a %= b);
    printf("Plus Assignment Operator :%d\n",a);
    printf("Plus Assignment Operator :%d\n",c);
    printf("Plus Assignment Operator :%d\n",d);
    printf("Plus Assignment Operator :%d\n",f);
    printf("Plus Assignment Operator :%d\n",g);
    printf("Plus Assignment Operator :%d\n",h);

    return 0;
}