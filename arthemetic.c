#include <stdio.h>

int main(){

    int a = 70;

    int b = -50;

    float c = (float)a/b;
    printf("addition of %d + %d : %d\n",a,b,a+b);
    printf("subtract of %d - %d : %d\n",a,b,a-b);
    printf("multiply of %d * %d : %d\n",a,b,a*b);
    printf("division of %d / %d : %f\n",a,b,c);
    printf("a mod b : %d",a%b);
    
    return 0;
}