#include<stdio.h>

int main(){
    int a,b;

    printf("enter value for a:");
    scanf("%d", &a);

    printf("enetr value for b:");
    scanf("%d", &b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("swaped values are a:%d\n", a);
    printf("b:%d", b);

    return 0;
}