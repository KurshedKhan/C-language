#include<stdio.h>

int main(){
    int a,b,c,d=0;
    printf("enter value:");
    scanf("%d", &a);
    c=a;

    while(c>0){
     b=c%10;
     d=(d*10)+b;
     c=c/10;
    }
    if(d==a){
        printf("yes it is");
    }
    else{
        printf("no its not");
    }

    return 0;
}