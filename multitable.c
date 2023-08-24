#include<stdio.h>

int main(){
    int a;
    int b=1;
    printf("Enter value for a:");
    scanf("%d", &a);

    while(b<=10){
        printf("%d*%d=%d \n",a,b, a*b);
        ++b;
    }

    return 0;
}