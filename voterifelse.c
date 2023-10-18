#include <stdio.h>

int main(){

    int a;
    printf("Enter your age ");
    scanf("%d",&a);
    
    if(a > 18){
        printf("You are eligible for vote.");
    }
    else if(a == 18){
        printf("You are eligible for vote in this year.");
    }
    else{
        printf("You are not eligible for vote.");
    }
    return 0;
}