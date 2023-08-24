#include<stdio.h>

int main(){
    int a;
    printf("Enter Age:");
    scanf("%d", &a);

    if(a>=0 && a<18){
        printf("Not Eligible to Vote");
    }
    else if(a>=18){
        printf("eligible to vote");
    }
    else{
        printf("invalid age input");
    }

    return 0;
}
