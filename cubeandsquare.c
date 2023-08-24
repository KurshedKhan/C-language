#include<stdio.h>

int main(){
    int a, b;
    printf("Enter value for a:\n");
    scanf("%d", &a);

    printf("select option:\n 1.Square\n 2.Cube\n");
    scanf("%d", &b);

    if(b==1){
        printf("Square of value:%d", a*a);
    }
    else if(b==2){
        printf("Cube of values:%d", a*a*a);
    }
    else{
        printf("invalid input");
    }

    return 0;


}