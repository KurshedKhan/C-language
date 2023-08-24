#include<stdio.h>

int main(){
    int a,b,c;

    printf("enter value for a:");
    scanf("%d", &a);

    printf("enter value for b");
    scanf("%d", &b);

    c=a;
    a=b;
    b=c;

    printf("new value for a:%d \n", a);
    printf("new value for b:%d", b);

    return 0;
}