#include<stdio.h>

int main(){
    int a,b;
    int c;
    printf("enter value for a:\n");
    scanf("%d", &a);
    printf("enter value for b:\n");
    scanf("%d", &b);
    float d=(float)a/b;
    printf("select:\n 1.Add\n 2.Subtract\n 3.multiply\n 4.divide\n");
    scanf("%d", &c);
    switch(c){
        case 1 :
        printf("%d+%d=%d", a,b,(a+b));
        break;
        case 2 :
        printf("%d-%d=%d", a,b,(a-b));
        break;
        case 3 :
        printf("%d*%d=%d", a,b,(a*b));
        break;
        case 4 :
        printf("%d/%d=%f", a,b,(d));
        break;
        default:
        printf("invalid input");}
        return 0;
}
