#include<stdio.h>

int main(){
    int a, b;

    printf("enter value for a:");
    scanf("%d", &a);

    printf("enter value for b");
    scanf("%d", &b);

    float c=(float)a/b;

    printf("%f", c);

    return 0;
}