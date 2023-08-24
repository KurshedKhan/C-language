#include<stdio.h>

int main(){
    int a,b,c;

    printf("enter value for a:");
    scanf("%d", &a);

    printf("ente rvalue for b:");
    scanf("%d", &b);

    c=(
        a>b?
        printf("a is greater"):
        printf("b is greater")
        );

    return 0;
}