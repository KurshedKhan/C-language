#include<stdio.h>

int main(){
    int a, b, h;
    printf("enter base of triangle:");
    scanf("%d", &b);

    printf("enter height of triangle:");
    scanf("%d", &h);

    a=0.5*b*h;

    printf("area of triangle is %d", a);

    return 0;
}