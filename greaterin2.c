#include<stdio.h>

int main(){
    int n1, n2;
    printf("enter value for n1:");
    scanf("%d", &n1);
    
    printf("enter value for n2:");
    scanf("%d", &n2);

    if(n1>n2){
        printf("n1 is greater");
    }
    else
    printf("n2 is greater");

    return 0;
}