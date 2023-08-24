#include<stdio.h>

int main(){
    double a,b,c;
    printf("enter value for a:");
    scanf("%lf", &a);

    printf("enter value for b:");
    scanf("%lf", &b);

    c=a*b;

    printf("product of values are:%.3lf", c);

    return 0;



}